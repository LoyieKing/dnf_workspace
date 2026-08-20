# dispatch_sig

`_ZN23Inter_MonitorCeraUpdate12dispatch_sigEP5CUserPci`

`Inter_MonitorCeraUpdate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCeraUpdate` | `0x084cea92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cea92  _ZN23Inter_MonitorCeraUpdate12dispatch_sigEP5CUserPci
#           Inter_MonitorCeraUpdate::dispatch_sig(CUser*, char*, int)
# range [0x084cea92, 0x084ceaed]
084cea92 +0x00:  push   %ebp
084cea93 +0x01:  mov    %esp,%ebp
084cea95 +0x03:  push   %ebx
084cea96 +0x04:  sub    $0x24,%esp
084cea99 +0x07:  mov    0x10(%ebp),%eax
084cea9c +0x0a:  mov    %eax,-0x10(%ebp)
084cea9f +0x0d:  mov    -0x10(%ebp),%eax
084ceaa2 +0x10:  mov    0xa(%eax),%ebx
084ceaa5 +0x13:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084ceaaa +0x18:  mov    %ebx,0x4(%esp)
084ceaae +0x1c:  mov    %eax,(%esp)
084ceab1 +0x1f:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084ceab6 +0x24:  mov    %eax,-0xc(%ebp)
084ceab9 +0x27:  cmpl   $0x0,-0xc(%ebp)
084ceabd +0x2b:  jne    084ceac6 <+0x34>
084ceabf +0x2d:  mov    $0x0,%eax
084ceac4 +0x32:  jmp    084ceae8 <+0x56>
084ceac6 +0x34:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084ceacb +0x39:  mov    (%eax),%eax
084ceacd +0x3b:  add    $0x2c,%eax
084cead0 +0x3e:  mov    (%eax),%ecx
084cead2 +0x40:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084cead7 +0x45:  mov    -0xc(%ebp),%edx
084ceada +0x48:  mov    %edx,0x4(%esp)
084ceade +0x4c:  mov    %eax,(%esp)
084ceae1 +0x4f:  call   *%ecx
084ceae3 +0x51:  mov    $0x0,%eax
084ceae8 +0x56:  add    $0x24,%esp
084ceaeb +0x59:  pop    %ebx
084ceaec +0x5a:  pop    %ebp
084ceaed +0x5b:  ret
```

## 反编译 C

```c
// Inter_MonitorCeraUpdate::dispatch_sig @ 0x84cea92

/* Inter_MonitorCeraUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCeraUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGameManager *this;
  int iVar2;
  
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  iVar2 = CGameManager::GetUserByAccId(this,uVar1);
  if (iVar2 != 0) {
    (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,iVar2);
  }
  return 0;
}
```
