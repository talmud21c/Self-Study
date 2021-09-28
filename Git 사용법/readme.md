# Git

### 1.작업 준비

1.github에 레포지토리 생성

2.로컬스토리지의 WorkSpace에 작업할 폴더 생성

3.폴더 안에서 마우스 오른쪽 클릭 Git Bash Here

4.Git Bash창에서 레포지토리 클론

```
$ git clone 깃레포지토리주소
```

5.작업

### 2.올리기 준비

6.Git Bash창에 작업한 파일 올리기

```
$ git add .
```

7.add 내역 확인하기

```
$ git status
```

 8.레포지토리에 커밋하기

```
$ git commit -m "수정 내용"
```

### 3.원격저장소에 올리기

9.push 하기

```
$ git push 저장소명 브랜치명
```



### ※브랜치 생성 및 변경

1.브랜치 목록 확인

```
$ git branch
```

2.브랜치 생성

```
$ git branch 브랜치명
```

3.작업공간(브랜치) 변경

```
$ git checkout 브랜치명
```



### ※원격저장소 이름 확인 및 변경

1.원격 저장소 단축이름 확인

```
$ git remote
```

2.원격 저장소 단축이름 변경

```
$ git remote rename 현재이름 바꿀이름
```

