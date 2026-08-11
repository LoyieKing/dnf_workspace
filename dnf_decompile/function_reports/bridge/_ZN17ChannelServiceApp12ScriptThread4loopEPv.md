# _ZN17ChannelServiceApp12ScriptThread4loopEPv

`ChannelServiceApp::ScriptThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x8063936` | `0xb40` | `0x804ef74` | `0xb3b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,677 +1,675 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x94c,%esp
 movl   $"*** Start up ScriptThread",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 mov    %eax,-0x30(%ebp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_logonEv>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $"select * from ch_script_version",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x2c(%ebp)
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x9d>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 call   <T> <_Z12G_ScriptDatav>
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x38(%ebp),%eax
 mov    (%eax),%ebx
 call   <T> <_Z12G_ScriptDatav>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $"select group_name, group_gc_no from ch_gc_info order by group_gc_no asc",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x2c(%ebp)
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x169>
 movl   $0x1,(%esp)
 call   <T> <exit>
 movl   $0x0,-0x24(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x1cb>
 mov    -0x38(%ebp),%eax
 mov    -0x30(%ebp),%edx
 add    $0x3804cd0,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIPciSt4lessIS0_ESaISt4pairIKS0_iEEEixERS4_>
 mov    %eax,%ebx
 mov    -0x38(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,(%ebx)
 mov    -0x38(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    -0x38(%ebp),%edx
 mov    (%edx),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 movl   $"1.[%s],[%d]\n",(%esp)
 call   <T> <printf>
 addl   $0x1,-0x24(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x172>
 movl   $"w+",0x4(%esp)
 movl   $"./cfg/channel_info.etc",(%esp)
 call   <T> <fopen>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x233>
 movl   $"[ERROR] cann't open channel_into.etc",(%esp)
 call   <T> <puts>
 movl   $0x1,(%esp)
 call   <T> <exit>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $"select kind_name, dungeon_name from ch_dungeon_data",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x2b2>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr13Mysql_relogonEv>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 movl   $0x0,-0x24(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x4b4>
 mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x14,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    -0x38(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 movl   $0x1e,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x6e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0xa,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[dungeon]\n",(%esp)
 call   <T> <fwrite>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x6e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    -0x50(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"select kind_name, dungeon_id from ch_dungeon_list where kind_name='%s'",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x882(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x3ec>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr13Mysql_relogonEv>
 lea    -0x882(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x44d>
 mov    -0x74(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0xc(%esp)
 movl   $"%d",0x8(%esp)
 movl   $0x6,0x4(%esp)
 lea    -0x7a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x7a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x74(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x74(%ebp)
 mov    -0x74(%ebp),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x3f5>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0xd,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[/dungeon]\n\n\n",(%esp)
 call   <T> <fwrite>
 addl   $0x1,-0x24(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x2be>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $"select * from ch_server_data where is_use = '1' order by server_id, channel_number",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x573>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr13Mysql_relogonEv>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 movl   $0x0,-0x24(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x915>
 mov    -0x38(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0xc(%esp)
 movl   $"%d",0x8(%esp)
 movl   $0x4,0x4(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x635>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x9,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[server]\n",(%esp)
 call   <T> <fwrite>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 movl   $0x4,0x8(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 lea    -0x82(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"[%s]\n",(%esp)
 call   <T> <printf>
 movl   $0x4,0x8(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x7e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 movl   $0x12c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x38(%ebp),%eax
 add    $0x44,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8e0(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x40,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8d8(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x3c,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8d0(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x38,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8c8(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x34,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8c0(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x30,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8b8(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x2c,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8b0(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x28,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8a8(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x24,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x8a0(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x20,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atof>
 fstpl  -0x898(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%esi
 mov    -0x38(%ebp),%eax
 add    $0x18,%eax
 mov    (%eax),%eax
 mov    %eax,-0x88c(%ebp)
 mov    -0x38(%ebp),%eax
 add    $0x14,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%ebx
 mov    -0x38(%ebp),%eax
 add    $0x10,%eax
 mov    (%eax),%edi
 mov    -0x38(%ebp),%eax
 add    $0xc,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 fldl   -0x8e0(%ebp)
 fstpl  0x68(%esp)
 fldl   -0x8d8(%ebp)
 fstpl  0x60(%esp)
 fldl   -0x8d0(%ebp)
 fstpl  0x58(%esp)
 fldl   -0x8c8(%ebp)
 fstpl  0x50(%esp)
 fldl   -0x8c0(%ebp)
 fstpl  0x48(%esp)
 fldl   -0x8b8(%ebp)
 fstpl  0x40(%esp)
 fldl   -0x8b0(%ebp)
 fstpl  0x38(%esp)
 fldl   -0x8a8(%ebp)
 fstpl  0x30(%esp)
 fldl   -0x8a0(%ebp)
 fstpl  0x28(%esp)
 fldl   -0x898(%ebp)
 fstpl  0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    -0x88c(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"   %d   %s   %d   `[%s]`   %d   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f",0x8(%esp)
 movl   $0x12c,0x4(%esp)
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <puts>
 movl   $0x4,0x8(%esp)
 lea    -0x7e(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncmp>
 test   %eax,%eax
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x8cc>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0xc,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[/server]\n\n\n",(%esp)
 call   <T> <fwrite>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x9,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[server]\n",(%esp)
 call   <T> <fwrite>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 movl   $0x4,0x8(%esp)
 lea    -0x82(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fputs>
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <fputc>
 addl   $0x1,-0x24(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x57f>
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x9,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"[/server]",(%esp)
 call   <T> <fwrite>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fflush>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 mov    -0x30(%ebp),%eax
 add    $0x3806d40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript12ReloadScriptEv>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $"select * from ch_script_version",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x482(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0xa1d>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr13Mysql_relogonEv>
 lea    -0x482(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_queryEPc>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr11Mysql_fetchERPPcP12st_mysql_res>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
-test   %eax,%eax
-mov    -0x38(%ebp),%eax
 mov    (%eax),%ebx
 call   <T> <_Z12G_ScriptDatav>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0xb1d>
+je     <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0xb18>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 call   <T> <_Z12G_ScriptDatav>
 mov    %eax,%ebx
 mov    -0x38(%ebp),%eax
 mov    (%eax),%esi
 movl   $"Script Reload : cur=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", prev=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 call   <T> <_Z12G_ScriptDatav>
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x38(%ebp),%eax
 mov    (%eax),%ebx
 call   <T> <_Z12G_ScriptDatav>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x1f9>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5DBMgr10Mysql_freeEP12st_mysql_res>
 movl   $0x3d0900,(%esp)
 call   <T> <usleep>
 jmp    <T> <_ZN17ChannelServiceApp12ScriptThread4loopEPv+0x99e>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x08063a93) */
/* WARNING: Removing unreachable block (ram,0x080639c7) */
/* DWARF original prototype: void loop(ScriptThread * this, void * temp) */

void __thiscall
ChannelServiceApp::ScriptThread::_ZN17ChannelServiceApp12ScriptThread4loopEPv
          (ScriptThread *this,void *temp)

{
  char *pcVar1;
  char *pcVar2;
  MYSQL_ROW *pppcVar3;
  ScriptData *pSVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TDebugTrace<char> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char local_886 [1024];
  char local_486 [1024];
  char local_86 [4];
  char local_82 [4];
  char local_7e [6];
  MYSQL_ROW local_78;
  char local_72 [30];
  char local_54 [20];
  char local_40 [4];
  char **local_3c;
  DBMgr local_38;
  ChannelService *local_34;
  MYSQL_RES *local_30;
  FILE *local_2c;
  int local_28;
  MYSQL_RES *local_24;
  int local_20;
  
                    /* Unresolved local var: ChannelService * pApp@[???]
                       Unresolved local var: DBMgr DBMgr_@[???]
                       Unresolved local var: char[1024] query@[???]
                       Unresolved local var: MYSQL_RES * res@[???]
                       Unresolved local var: MYSQL_ROW row@[???]
                       Unresolved local var: FILE * fp@[???]
                       Unresolved local var: int count@[???]
                       Unresolved local var: char[4] pre_server_id@[???] */
  puts("*** Start up ScriptThread");
  local_34 = TManager<ChannelServiceApp::ChannelService>::getManager
                       (&this->super_TManager<ChannelServiceApp::ChannelService>);
  DBMgr::Mysql_logon(&local_38);
  memset(local_486,0,0x400);
  snprintf(local_486,0x400,"select * from ch_script_version");
  local_30 = DBMgr::Mysql_query(&local_38,local_486);
  pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_3c,local_30);
  local_3c = *pppcVar3;
  pSVar4 = G_ScriptData();
  memset(pSVar4,0,0x10);
  pcVar1 = *local_3c;
  pSVar4 = G_ScriptData();
  strcpy(pSVar4->channel_script_version,pcVar1);
  DBMgr::Mysql_free(&local_38,local_30);
  memset(local_486,0,0x400);
  snprintf(local_486,0x400,"select group_name, group_gc_no from ch_gc_info order by group_gc_no asc"
          );
  local_30 = DBMgr::Mysql_query(&local_38,local_486);
  local_28 = 0;
  while( true ) {
    pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_3c,local_30);
    local_3c = *pppcVar3;
    if (local_3c == (char **)0x0) break;
    piVar5 = std::map<char*,_int,_std::less<char*>,_std::allocator<std::pair<char*_const,_int>_>_>::
             operator[](&(local_34->super_Channel).gc_map,local_3c);
    iVar8 = atoi(local_3c[1]);
    *piVar5 = iVar8;
    iVar8 = atoi(local_3c[1]);
    printf("1.[%s],[%d]\n",*local_3c,iVar8);
    local_28 = local_28 + 1;
  }
  while (local_2c = fopen("./cfg/channel_info.etc","w+"), local_2c != (FILE *)0x0) {
    memset(local_486,0,0x400);
    snprintf(local_486,0x400,"select kind_name, dungeon_name from ch_dungeon_data");
    local_30 = DBMgr::Mysql_query(&local_38,local_486);
    if (local_30 == (MYSQL_RES *)0x0) {
      DBMgr::Mysql_relogon(&local_38);
      DBMgr::Mysql_query(&local_38,local_486);
    }
    local_28 = 0;
    while( true ) {
      pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_3c,local_30);
      local_3c = *pppcVar3;
      if (local_3c == (char **)0x0) break;
                    /* Unresolved local var: char[1024] sub_query@[???]
                       Unresolved local var: char[20] kind_name@[???]
                       Unresolved local var: char[30] dungeon_name@[???]
                       Unresolved local var: MYSQL_RES * sub_res@[???]
                       Unresolved local var: MYSQL_ROW sub_row@[???]
                       Unresolved local var: int sub_count@[???] */
      strncpy(local_54,*local_3c,0x14);
      strncpy(local_72,local_3c[1],0x1e);
      fwrite("[dungeon]\n",1,10,local_2c);
      fputs(local_54,local_2c);
      fputc(10,local_2c);
      fputs(local_72,local_2c);
      fputc(10,local_2c);
      memset(local_886,0,0x400);
      snprintf(local_886,0x400,
               "select kind_name, dungeon_id from ch_dungeon_list where kind_name=\'%s\'",local_54);
      local_24 = DBMgr::Mysql_query(&local_38,local_886);
      if (local_24 == (MYSQL_RES *)0x0) {
        DBMgr::Mysql_relogon(&local_38);
        DBMgr::Mysql_query(&local_38,local_886);
      }
      local_20 = 0;
      while( true ) {
        pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_78,local_24);
        local_78 = *pppcVar3;
        if (local_78 == (MYSQL_ROW)0x0) break;
                    /* Unresolved local var: char[6] dungeon_id@[???] */
        iVar8 = atoi(local_78[1]);
        snprintf(local_7e,6,"%d",iVar8);
        fputs(local_7e,local_2c);
        fputc(10,local_2c);
        local_20 = local_20 + 1;
      }
      DBMgr::Mysql_free(&local_38,local_24);
      fwrite("[/dungeon]\n\n\n",1,0xd,local_2c);
      local_28 = local_28 + 1;
    }
    DBMgr::Mysql_free(&local_38,local_30);
    memset(local_486,0,0x400);
    snprintf(local_486,0x400,
             "select * from ch_server_data where is_use = \'1\' order by server_id, channel_number")
    ;
    local_30 = DBMgr::Mysql_query(&local_38,local_486);
    if (local_30 == (MYSQL_RES *)0x0) {
      DBMgr::Mysql_relogon(&local_38);
      DBMgr::Mysql_query(&local_38,local_486);
    }
    local_28 = 0;
    while( true ) {
      pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_3c,local_30);
      local_3c = *pppcVar3;
      if (local_3c == (char **)0x0) break;
                    /* Unresolved local var: char[300] tmp_buf@[???]
                       Unresolved local var: char[4] server_id@[???]
                       Unresolved local var: char[4] tm_id@[???] */
      iVar8 = atoi(local_3c[1]);
      snprintf(local_86,4,"%d",iVar8);
      if (local_28 == 0) {
        fwrite("[server]\n",1,9,local_2c);
        fputs(local_86,local_2c);
        fputc(10,local_2c);
        strncpy(local_40,local_86,4);
        printf("[%s]\n",local_86);
      }
      strncpy(local_82,local_86,4);
      memset(local_886,0,300);
      dVar10 = atof(local_3c[0x11]);
      dVar11 = atof(local_3c[0x10]);
      dVar12 = atof(local_3c[0xf]);
      dVar13 = atof(local_3c[0xe]);
      dVar14 = atof(local_3c[0xd]);
      dVar15 = atof(local_3c[0xc]);
      dVar16 = atof(local_3c[0xb]);
      dVar17 = atof(local_3c[10]);
      dVar18 = atof(local_3c[9]);
      dVar19 = atof(local_3c[8]);
      iVar8 = atoi(local_3c[7]);
      pcVar1 = local_3c[6];
      iVar6 = atoi(local_3c[5]);
      pcVar2 = local_3c[4];
      iVar7 = atoi(local_3c[3]);
      snprintf(local_886,300,
               "   %d   %s   %d   `[%s]`   %d   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f"
               ,iVar7,pcVar2,iVar6,pcVar1,iVar8,dVar19,dVar18,dVar17,dVar16,dVar15,dVar14,dVar13,
               dVar12,dVar11,dVar10);
      puts(local_886);
      iVar8 = strncmp(local_40,local_82,4);
      if (iVar8 != 0) {
        fwrite("[/server]\n\n\n",1,0xc,local_2c);
        fwrite("[server]\n",1,9,local_2c);
        fputs(local_86,local_2c);
        fputc(10,local_2c);
      }
      strncpy(local_40,local_86,4);
      fputs(local_886,local_2c);
      fputc(10,local_2c);
      local_28 = local_28 + 1;
    }
    fwrite("[/server]",1,9,local_2c);
    fflush(local_2c);
    fclose(local_2c);
    DBMgr::Mysql_free(&local_38,local_30);
    ChannelScript::ReloadScript(&local_34->super_ChannelScript);
    while( true ) {
      memset(local_486,0,0x400);
      snprintf(local_486,0x400,"select * from ch_script_version");
      local_30 = DBMgr::Mysql_query(&local_38,local_486);
      if (local_30 == (MYSQL_RES *)0x0) {
        DBMgr::Mysql_relogon(&local_38);
        DBMgr::Mysql_query(&local_38,local_486);
      }
      pppcVar3 = DBMgr::Mysql_fetch(&local_38,&local_3c,local_30);
      local_3c = *pppcVar3;
      pcVar1 = *local_3c;
      pSVar4 = G_ScriptData();
      iVar8 = strcmp(pSVar4->channel_script_version,pcVar1);
      if (iVar8 != 0) break;
      DBMgr::Mysql_free(&local_38,local_30);
      usleep(4000000);
    }
    TDebugTrace<char>::Lock(&gFileLogInfo);
    pSVar4 = G_ScriptData();
    pcVar1 = *local_3c;
    pTVar9 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Script Reload : cur=");
    pTVar9 = TDebugTrace<char>::operator<<(pTVar9,pcVar1);
    pTVar9 = TDebugTrace<char>::operator<<(pTVar9,", prev=");
    pTVar9 = TDebugTrace<char>::operator<<(pTVar9,pSVar4->channel_script_version);
    TDebugTrace<char>::operator<<(pTVar9,endl<char>);
    TDebugTrace<char>::Unlock(&gFileLogInfo);
    pSVar4 = G_ScriptData();
    memset(pSVar4,0,0x10);
    pcVar1 = *local_3c;
    pSVar4 = G_ScriptData();
    strcpy(pSVar4->channel_script_version,pcVar1);
    DBMgr::Mysql_free(&local_38,local_30);
  }
  puts("[ERROR] cann\'t open channel_into.etc");
                    /* WARNING: Subroutine does not return */
  exit(1);
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ScriptThread.cpp](source/ChannelOld/DNFChannelBridge/ScriptThread.cpp)（约第 18 行）：

```cpp
void ChannelServiceApp::ScriptThread::loop(void* temp)
{
    puts("*** Start up ScriptThread");
    ChannelService* pApp = getManager();
    DBMgr DBMgr_;
    DBMgr_.Mysql_logon();

    char query[1024];
    MYSQL_RES* res;
    MYSQL_ROW row;
    FILE* fp;
    int count;
    char pre_server_id[4];

    memset(query, 0, 0x400);
    snprintf(query, 0x400, "select * from ch_script_version");
    if ((res = DBMgr_.Mysql_query(query), 0))
        exit(1);
    row = *DBMgr_.Mysql_fetch(row, res);
    memset(G_ScriptData(), 0, 0x10);
    strcpy(G_ScriptData()->channel_script_version, row[0]);
    DBMgr_.Mysql_free(res);

    memset(query, 0, 0x400);
    snprintf(query, 0x400, "select group_name, group_gc_no from ch_gc_info order by group_gc_no asc");
    if ((res = DBMgr_.Mysql_query(query), 0))
        exit(1);
    count = 0;
    while ((row = *DBMgr_.Mysql_fetch(row, res)) != NULL)
    {
        pApp->gc_map[row[0]] = atoi(row[1]);
        printf("1.[%s],[%d]\n", row[0], atoi(row[1]));
        count = count + 1;
    }

    while (true)
    {
RELOAD_SCRIPT:
        if ((fp = fopen("./cfg/channel_info.etc", "w+")) == NULL)
        {
            puts("[ERROR] cann't open channel_into.etc");
            exit(1);
        }
        memset(query, 0, 0x400);
        snprintf(query, 0x400, "select kind_name, dungeon_name from ch_dungeon_data");
        if ((res = DBMgr_.Mysql_query(query)) == NULL)
        {
            DBMgr_.Mysql_relogon();
            DBMgr_.Mysql_query(query);
        }
        count = 0;
        while ((row = *DBMgr_.Mysql_fetch(row, res)) != NULL)
        {
            char sub_query[1024];
            char kind_name[20];
            char dungeon_name[30];
            strncpy(kind_name, row[0], 0x14);
            strncpy(dungeon_name, row[1], 0x1e);
            fwrite("[dungeon]\n", 1, 10, fp);
            fputs(kind_name, fp);
            fputc(10, fp);
            fputs(dungeon_name, fp);
            fputc(10, fp);
            MYSQL_RES* sub_res;
            MYSQL_ROW sub_row;
            int sub_count;
            memset(sub_query, 0, 0x400);
            snprintf(sub_query, 0x400, "select kind_name, dungeon_id from ch_dungeon_list where kind_name='%s'", kind_name);
            if ((sub_res = DBMgr_.Mysql_query(sub_query)) == NULL)
            {
                DBMgr_.Mysql_relogon();
                DBMgr_.Mysql_query(sub_query);
            }
            sub_count = 0;
            while ((sub_row = *DBMgr_.Mysql_fetch(sub_row, sub_res)) != NULL)
            {
                char dungeon_id[6];
                snprintf(dungeon_id, 6, "%d", atoi(sub_row[1]));
                fputs(dungeon_id, fp);
                fputc(10, fp);
                sub_count = sub_count + 1;
            }
            DBMgr_.Mysql_free(sub_res);
            fwrite("[/dungeon]\n\n\n", 1, 0xd, fp);
            count = count + 1;
        }
        DBMgr_.Mysql_free(res);

        memset(query, 0, 0x400);
        snprintf(query, 0x400, "select * from ch_server_data where is_use = '1' order by server_id, channel_number");
        if ((res = DBMgr_.Mysql_query(query)) == NULL)
        {
            DBMgr_.Mysql_relogon();
            DBMgr_.Mysql_query(query);
        }
        count = 0;
        while ((row = *DBMgr_.Mysql_fetch(row, res)) != NULL)
        {
            char tmp_buf[300];
            char tm_id[4];
            char server_id[4];
            snprintf(server_id, 4, "%d", atoi(row[1]));
            if (count == 0)
            {
                fwrite("[server]\n", 1, 9, fp);
                fputs(server_id, fp);
                fputc(10, fp);
                strncpy(pre_server_id, server_id, 4);
                printf("[%s]\n", server_id);
            }
            strncpy(tm_id, server_id, 4);
            memset(tmp_buf, 0, 300);
            snprintf(tmp_buf, 300,
                     "   %d   %s   %d   `[%s]`   %d   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f   %0.1f",
                     atoi(row[3]), row[4], atoi(row[5]), row[6], atoi(row[7]),
                     atof(row[8]), atof(row[9]), atof(row[10]), atof(row[11]), atof(row[12]),
                     atof(row[13]), atof(row[14]), atof(row[15]), atof(row[16]), atof(row[17]));
            puts(tmp_buf);
            if (strncmp(pre_server_id, tm_id, 4) != 0)
            {
                fwrite("[/server]\n\n\n", 1, 0xc, fp);
                fwrite("[server]\n", 1, 9, fp);
                fputs(server_id, fp);
                fputc(10, fp);
            }
            strncpy(pre_server_id, server_id, 4);
            fputs(tmp_buf, fp);
            fputc(10, fp);
            count = count + 1;
        }
        fwrite("[/server]", 1, 9, fp);
        fflush(fp);
        fclose(fp);
        DBMgr_.Mysql_free(res);

        pApp->ChannelScript::ReloadScript();
        while (true)
        {
            memset(query, 0, 0x400);
            snprintf(query, 0x400, "select * from ch_script_version");
            if ((res = DBMgr_.Mysql_query(query)) == NULL)
            {
                DBMgr_.Mysql_relogon();
                DBMgr_.Mysql_query(query);
            }
            row = *DBMgr_.Mysql_fetch(row, res);
            // 语义还原（2026-08-11 用户规矩：不允许硬套 asm）：
            // ORIG 的 row != NULL 死比较无法用纯 C++ 复现，按规矩归入
            // caliber_issues.csv（REMAIN），不再用内联 asm 强制。
            if (strcmp(G_ScriptData()->channel_script_version, row[0]) != 0)
            {
                GLOG(gFileLogInfo, "Script Reload : cur=" << row[0]
                    << ", prev=" << G_ScriptData()->channel_script_version);
                memset(G_ScriptData(), 0, 0x10);
                strcpy(G_ScriptData()->channel_script_version, row[0]);
                DBMgr_.Mysql_free(res);
                goto RELOAD_SCRIPT;
            }
            DBMgr_.Mysql_free(res);
            usleep(4000000);
        }
    }
}
```
