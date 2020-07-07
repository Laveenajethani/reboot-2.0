## Problem #5 :  
#### play with files and directories 
#### (a) create  3 files named   abc.txt  ok  fine  g.txt  /tmp directory 
```
[root@localhost ~]# cd /tmp
[root@localhost tmp]# touch abc.txt ok fine
```
#### (b) create  4  directories   aa aaa aaaa  under  /tmp directory 
```
[root@localhost tmp]# mkdir a aa aaa aaaa

```
#### (c) give ls command to  list the content of  /tmp directory 
```
[root@localhost tmp]# ls
a
aa
aaa
aaaa
abc.txt
fine
ok
systemd-private-783561777b4147439b5dbbe0bd0e6787-chronyd.service-EkX5Xe
systemd-private-783561777b4147439b5dbbe0bd0e6787-colord.service-72jAzh
systemd-private-783561777b4147439b5dbbe0bd0e6787-dbus-broker.service-MxXFBi
systemd-private-783561777b4147439b5dbbe0bd0e6787-earlyoom.service-CcX7Ah
systemd-private-783561777b4147439b5dbbe0bd0e6787-fwupd.service-5CJWmg
systemd-private-783561777b4147439b5dbbe0bd0e6787-geoclue.service-jVrIni
systemd-private-783561777b4147439b5dbbe0bd0e6787-ModemManager.service-AGTOuj
systemd-private-783561777b4147439b5dbbe0bd0e6787-rtkit-daemon.service-UXVush
systemd-private-783561777b4147439b5dbbe0bd0e6787-switcheroo-control.service-CAfcTf
systemd-private-783561777b4147439b5dbbe0bd0e6787-systemd-logind.service-9h7Fog
systemd-private-783561777b4147439b5dbbe0bd0e6787-upower.service-QQE1bg
Temp-07dd2686-d948-4c49-b0fb-dd37d41e45fd
Temp-0ca169eb-8d35-4c55-b639-33cd24f2f303
tracker-extract-files.1000

```
#### (d) make sure it will only list the content (file|directory)  having 2 char in their name.
```
[root@localhost tmp]# ls ??
ok

aa:

```
