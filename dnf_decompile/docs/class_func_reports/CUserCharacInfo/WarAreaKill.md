# WarAreaKill

`_ZN15CUserCharacInfo11WarAreaKillEiif`

`CUserCharacInfo::WarAreaKill(int, int, float)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086459c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086459c4  _ZN15CUserCharacInfo11WarAreaKillEiif
#           CUserCharacInfo::WarAreaKill(int, int, float)
# range [0x086459c4, 0x08645a9f]
086459c4 +0x00:  push   %ebp
086459c5 +0x01:  mov    %esp,%ebp
086459c7 +0x03:  push   %ebx
086459c8 +0x04:  sub    $0x34,%esp
086459cb +0x07:  mov    0x8(%ebp),%eax
086459ce +0x0a:  mov    0x10(%eax),%eax
086459d1 +0x0d:  test   %eax,%eax
086459d3 +0x0f:  jne    08645a10 <+0x4c>
086459d5 +0x11:  movl   $0x5,0xc(%esp)
086459dd +0x19:  movl   $0x284,0x8(%esp)
086459e5 +0x21:  movl   $&_ZZN15CUserCharacInfo11WarAreaKillEiifE19__PRETTY_FUNCTION__,0x4(%esp)
086459ed +0x29:  lea    -0x18(%ebp),%eax
086459f0 +0x2c:  mov    %eax,(%esp)
086459f3 +0x2f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086459f8 +0x34:  movl   $"WARAREA CUserCharacInfo::WarAreaKill() : m_selected is NULL",0x4(%esp)
08645a00 +0x3c:  lea    -0x18(%ebp),%eax
08645a03 +0x3f:  mov    %eax,(%esp)
08645a06 +0x42:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645a0b +0x47:  jmp    08645a99 <+0xd5>
08645a10 +0x4c:  mov    0x10(%ebp),%eax
08645a13 +0x4f:  mov    %eax,0x4(%esp)
08645a17 +0x53:  mov    0x8(%ebp),%eax
08645a1a +0x56:  mov    %eax,(%esp)
08645a1d +0x59:  call   086457c0 <_ZN15CUserCharacInfo17ChangeFinishPointEi>  ; CUserCharacInfo::ChangeFinishPoint(int)
08645a22 +0x5e:  mov    0x8(%ebp),%eax
08645a25 +0x61:  mov    0x10(%eax),%eax
08645a28 +0x64:  mov    0xc(%ebp),%ecx
08645a2b +0x67:  mov    0x8(%ebp),%edx
08645a2e +0x6a:  mov    0x10(%edx),%edx
08645a31 +0x6d:  mov    0xc(%ebp),%ebx
08645a34 +0x70:  add    $0x380,%ebx
08645a3a +0x76:  flds   0xe(%edx,%ebx,4)
08645a3e +0x7a:  fadds  0x14(%ebp)
08645a41 +0x7d:  lea    0x380(%ecx),%edx
08645a47 +0x83:  fstps  0xe(%eax,%edx,4)
08645a4b +0x87:  cmpl   $0x4,0xc(%ebp)
08645a4f +0x8b:  jne    08645a58 <+0x94>
08645a51 +0x8d:  mov    $0x1,%eax
08645a56 +0x92:  jmp    08645a5d <+0x99>
08645a58 +0x94:  mov    $0x0,%eax
08645a5d +0x99:  mov    0x8(%ebp),%edx
08645a60 +0x9c:  mov    0x10(%edx),%edx
08645a63 +0x9f:  mov    0xe0a(%edx),%ecx
08645a69 +0xa5:  mov    0x8(%ebp),%edx
08645a6c +0xa8:  mov    0x10(%edx),%edx
08645a6f +0xab:  mov    0xe06(%edx),%edx
08645a75 +0xb1:  mov    0x8(%ebp),%ebx
08645a78 +0xb4:  add    $0x79700,%ebx
08645a7e +0xba:  mov    %eax,0x10(%esp)
08645a82 +0xbe:  mov    %ecx,0xc(%esp)
08645a86 +0xc2:  mov    %edx,0x8(%esp)
08645a8a +0xc6:  mov    0x10(%ebp),%eax
08645a8d +0xc9:  mov    %eax,0x4(%esp)
08645a91 +0xcd:  mov    %ebx,(%esp)
08645a94 +0xd0:  call   08684b5c <_ZN15cUserHistoryLog5FPAddEiii12eFPAddReason>  ; cUserHistoryLog::FPAdd(int, int, int, eFPAddReason)
08645a99 +0xd5:  add    $0x34,%esp
08645a9c +0xd8:  pop    %ebx
08645a9d +0xd9:  pop    %ebp
08645a9e +0xda:  ret
08645a9f +0xdb:  nop
```

## 反编译 C

```c
// CUserCharacInfo::WarAreaKill @ 0x86459c4

/* CUserCharacInfo::WarAreaKill(int, int, float) */

void __thiscall
CUserCharacInfo::WarAreaKill(CUserCharacInfo *this,int param_1,int param_2,float param_3)

{
  cMyTrace local_1c [20];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::WarAreaKill(int, int, float)",0x284,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::WarAreaKill() : m_selected is NULL");
  }
  else {
    ChangeFinishPoint(this,param_2);
    *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4) =
         *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4) + param_3;
    cUserHistoryLog::FPAdd
              ((cUserHistoryLog *)(this + 0x79700),param_2,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),param_1 == 4);
  }
  return;
}
```
