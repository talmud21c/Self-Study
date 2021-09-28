<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ page import="user.UserDAO"%><!-- userdao의클래스를 가져옴 -->
<%@ page import="java.io.PrintWriter"%><!-- 자바 클래스 사용 -->
<%
	request.setCharacterEncoding("UTF-8");
%>
<!-- 한명의 회원정보를 담는 user클래스를 자바 빈즈로 사용 / scope:페이지 현재의 페이지에서만 사용 -->
<jsp:useBean id="user" class="user.User" scope="page" />
<jsp:setProperty name="user" property="userID" />
<jsp:setProperty name="user" property="userPassword" />
<jsp:setProperty name="user" property="userName" />
<jsp:setProperty name="user" property="userGender" />
<jsp:setProperty name="user" property="userMail" />

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>jsp 게시판 웹사이트</title>
</head>
<body>
	<%
		//로긴된 회원들은 페이지에 접속할수 없도록
		String userID = null;
		if (session.getAttribute("userID") != null) {
			userID = (String) session.getAttribute("userID");

		}
		if (userID != null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('이미 로그인 되어있습니다.')");
			script.println("location.href='main.jsp'");
			script.println("</script>");
		}
	////
		if (user.getUserID() == null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('ID를 입력하세요!')");
			script.println("history.back()");
			script.println("</script>");
		} else if (user.getUserPassword() == null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('비밀번호를 입력하세요!')");
			script.println("history.back()");
			script.println("</script>");
		} else if (user.getUserName() == null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('이름을 입력하세요!')");
			script.println("history.back()");
			script.println("</script>");
		} else if (user.getUserGender() == null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('성별을 선택해주세요!')");
			script.println("history.back()");
			script.println("</script>");
		} else if (user.getUserMail() == null) {
			PrintWriter script = response.getWriter();
			script.println("<script>");
			script.println("alert('이메일을 입력하세요!')");
			script.println("history.back()");
			script.println("</script>");
		} else {
			UserDAO userDAO = new UserDAO(); //인스턴스 생성
			int result = userDAO.join(user);

			if (result == -1) { // 아이디가 기본키 중복되면 오류
				PrintWriter script = response.getWriter();
				script.println("<script>");
				script.println("alert('이미 존재하는 아이디 입니다.')");
				script.println("history.back()");
				script.println("</script>");
			} //가입 성공
			else {
				PrintWriter script = response.getWriter();
				script.println("<script>");
				script.println("location.href = 'main.jsp'");
				script.println("</script>");
			}
		}
	%>
</body>
</html>