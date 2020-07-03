# Linux Kernel Assignment : 
## Problem #1    
### Block System call : 
#### (a)block system call for date command 
```
```
#### (b)block system call for firefox command
```
```
## Problem #2 
### play with directory 
#### (a)create a directory without name from command line
```
[laveenajethani@localhost ~]$ mkdir ' '
[laveenajethani@localhost ~]$ ls
' '        Documents   -okgoogle   Public                     typescript
 A         Downloads   Pictures    Templates                  Videos
 Desktop   Music       practise    terminal-AdvancedNewFile

```
#### (b)create a directory with name "-okgoogle"
```
[laveenajethani@localhost ~]$ mkdir -- "-okgoogle"
[laveenajethani@localhost ~]$ ls
' '        Documents   -okgoogle   Public                     typescript
 A         Downloads   Pictures    Templates                  Videos
 Desktop   Music       practise    terminal-AdvancedNewFile

```
## Problem #3 
###  create a directory structure 
```
[laveenajethani@localhost ~]$ mkdir -p A/{B/{G/K/reboot.txt,H/J/reboot.txt},C/{I/J/reboot.txt,J/L/reboot.txt},D/{F/L/reboot.txt,E/M/reboot.txt}}
[laveenajethani@localhost ~]$ tree A
A
├── B
│   ├── G
│   │   └── K
│   │       └── reboot.txt
│   └── H
│       └── J
│           └── reboot.txt
├── C
│   ├── I
│   │   └── J
│   │       └── reboot.txt
│   └── J
│       └── L
│           └── reboot.txt
└── D
    ├── E
    │   └── M
    │       └── reboot.txt
    └── F
        └── L
            └── reboot.txt

21 directories, 0 files

```
## Problem #4
### share and files and folder 
#### (a)create two users name jack and Jill  from command line
```
[root@localhost ~]# useradd jack
[root@localhost ~]# useradd jill
[root@localhost ~]# passwd jack
Changing password for user jack.
New password: 
BAD PASSWORD: The password contains the user name in some form
Retype new password: 
passwd: all authentication tokens updated successfully.
[root@localhost ~]# passwd jill
Changing password for user jill.
New password: 
BAD PASSWORD: The password contains the user name in some form
Retype new password: 
passwd: all authentication tokens updated successfully.

```

#### (b)create all the data under home directory of each users 
```
root@localhost ~]# cd /
[root@localhost /]# ls
bin   dev  home  lib64       media  opt   root  sbin  sys  usr  VBox.log
boot  etc  lib   lost+found  mnt    proc  run   srv   tmp  var
[root@localhost /]# cd /home
[root@localhost home]# ls
jack  jill  laveenajethani  sharedFolder


```
#### (c)login with jack user and create a file name  jack.txt using vim editor and write "hello jack"
```
```
#### (d)from jack user also create two directories name jack1 & jack2 
```
```
#### (e)now login from Jill user and create a file. Jill.txt using vim editor and write "hey jiil"
```
```
#### (f)from Jill also create two directoires named jill1 & jill2 
```
```
Important :  swap these files and directories in between users  and to swap don't use root account.

## Problem #5 :  
#### play with files and directories 
#### (a) create  3 files named   abc.txt  ok  fine  g.txt  /tmp directory 
```
```
#### (b) create  4  directories   aa aaa aaaa  under  /tmp directory 
```
```
#### (c) give ls command to  list the content of  /tmp directory 
```
```
#### (d) make sure it will only list the content (file|directory)  having 2 char in their name.
```
```
## problem #6:  
### run command without any output 
#### (a) open terminal and type any command 
```
```
#### (b)once you press enter your output of given command must not  print
```
```
#### (c)you are not allowed to redirect output anywhere 
```
```



