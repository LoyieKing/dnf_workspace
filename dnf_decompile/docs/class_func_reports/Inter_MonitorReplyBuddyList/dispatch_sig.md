# dispatch_sig

`_ZN27Inter_MonitorReplyBuddyList12dispatch_sigEP5CUserPci`

`Inter_MonitorReplyBuddyList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorReplyBuddyList` | `0x084c9148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9148  _ZN27Inter_MonitorReplyBuddyList12dispatch_sigEP5CUserPci
#           Inter_MonitorReplyBuddyList::dispatch_sig(CUser*, char*, int)
# range [0x084c9148, 0x084c9193]
084c9148 +0x00:  push   %ebp
084c9149 +0x01:  mov    %esp,%ebp
084c914b +0x03:  push   %edi
084c914c +0x04:  push   %esi
084c914d +0x05:  push   %ebx
084c914e +0x06:  sub    $0x2c,%esp
084c9151 +0x09:  mov    0x10(%ebp),%eax
084c9154 +0x0c:  mov    %eax,-0x1c(%ebp)
084c9157 +0x0f:  mov    -0x1c(%ebp),%eax
084c915a +0x12:  movzbl 0xe(%eax),%eax
084c915e +0x16:  movzbl %al,%esi
084c9161 +0x19:  mov    -0x1c(%ebp),%eax
084c9164 +0x1c:  lea    0xf(%eax),%edi
084c9167 +0x1f:  mov    -0x1c(%ebp),%eax
084c916a +0x22:  mov    0xa(%eax),%ebx
084c916d +0x25:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c9172 +0x2a:  mov    %esi,0xc(%esp)
084c9176 +0x2e:  mov    %edi,0x8(%esp)
084c917a +0x32:  mov    %ebx,0x4(%esp)
084c917e +0x36:  mov    %eax,(%esp)
084c9181 +0x39:  call   086c8694 <_ZN9GameWorld20send_buddy_conn_listEjP9BuddyListi>  ; GameWorld::send_buddy_conn_list(unsigned int, BuddyList*, int)
084c9186 +0x3e:  mov    $0x0,%eax
084c918b +0x43:  add    $0x2c,%esp
084c918e +0x46:  pop    %ebx
084c918f +0x47:  pop    %esi
084c9190 +0x48:  pop    %edi
084c9191 +0x49:  pop    %ebp
084c9192 +0x4a:  ret
084c9193 +0x4b:  nop
```

## 反编译 C

```c
// Inter_MonitorReplyBuddyList::dispatch_sig @ 0x84c9148

/* Inter_MonitorReplyBuddyList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorReplyBuddyList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  GameWorld *this;
  
  bVar1 = *(byte *)(param_3 + 0xe);
  uVar2 = *(uint *)(param_3 + 10);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_buddy_conn_list(this,uVar2,(BuddyList *)(param_3 + 0xf),(uint)bVar1);
  return 0;
}
```
