# dispatch_sig

`_ZN23Inter_LoadServerMessage12dispatch_sigEP5CUserPci`

`Inter_LoadServerMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadServerMessage` | `0x084daeee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084daeee  _ZN23Inter_LoadServerMessage12dispatch_sigEP5CUserPci
#           Inter_LoadServerMessage::dispatch_sig(CUser*, char*, int)
# range [0x084daeee, 0x084daf2f]
084daeee +0x00:  push   %ebp
084daeef +0x01:  mov    %esp,%ebp
084daef1 +0x03:  sub    $0x28,%esp
084daef4 +0x06:  mov    0x10(%ebp),%eax
084daef7 +0x09:  mov    %eax,-0x10(%ebp)
084daefa +0x0c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084daeff +0x11:  mov    %eax,(%esp)
084daf02 +0x14:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
084daf07 +0x19:  mov    %eax,-0xc(%ebp)
084daf0a +0x1c:  cmpl   $0x0,-0xc(%ebp)
084daf0e +0x20:  jne    084daf17 <+0x29>
084daf10 +0x22:  mov    $0x0,%eax
084daf15 +0x27:  jmp    084daf2e <+0x40>
084daf17 +0x29:  mov    -0x10(%ebp),%eax
084daf1a +0x2c:  mov    %eax,0x4(%esp)
084daf1e +0x30:  mov    -0xc(%ebp),%eax
084daf21 +0x33:  mov    %eax,(%esp)
084daf24 +0x36:  call   08600b7a <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE>  ; CSharedServerMessageManager::SetServerMessage(SIG_EVENT_SERVER_MESSAGE*)
084daf29 +0x3b:  mov    $0x0,%eax
084daf2e +0x40:  leave
084daf2f +0x41:  ret
```

## 反编译 C

```c
// Inter_LoadServerMessage::dispatch_sig @ 0x84daeee

/* Inter_LoadServerMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadServerMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGameManager *this;
  CSharedServerMessageManager *this_00;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (this_00 != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::SetServerMessage(this_00,(SIG_EVENT_SERVER_MESSAGE *)param_3);
  }
  return 0;
}
```
