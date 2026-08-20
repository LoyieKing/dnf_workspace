# SendCraneItemNeedMaterial

`_ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser`

`CraneMinigameManager::SendCraneItemNeedMaterial(CUser*)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebf2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebf2e  _ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser
#           CraneMinigameManager::SendCraneItemNeedMaterial(CUser*)
# range [0x080ebf2e, 0x080ebfc8]
080ebf2e +0x00:  push   %ebp
080ebf2f +0x01:  mov    %esp,%ebp
080ebf31 +0x03:  push   %esi
080ebf32 +0x04:  push   %ebx
080ebf33 +0x05:  sub    $0x20,%esp
080ebf36 +0x08:  lea    -0x14(%ebp),%eax
080ebf39 +0x0b:  mov    %eax,(%esp)
080ebf3c +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080ebf41 +0x13:  movl   $0x1a7,0x8(%esp)
080ebf49 +0x1b:  movl   $0x0,0x4(%esp)
080ebf51 +0x23:  lea    -0x14(%ebp),%eax
080ebf54 +0x26:  mov    %eax,(%esp)
080ebf57 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080ebf5c +0x2e:  mov    0x8(%ebp),%eax
080ebf5f +0x31:  movzbl 0x68(%eax),%eax
080ebf63 +0x35:  movzbl %al,%eax
080ebf66 +0x38:  mov    %eax,0x4(%esp)
080ebf6a +0x3c:  lea    -0x14(%ebp),%eax
080ebf6d +0x3f:  mov    %eax,(%esp)
080ebf70 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080ebf75 +0x47:  movl   $0x1,0x4(%esp)
080ebf7d +0x4f:  lea    -0x14(%ebp),%eax
080ebf80 +0x52:  mov    %eax,(%esp)
080ebf83 +0x55:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080ebf88 +0x5a:  lea    -0x14(%ebp),%eax
080ebf8b +0x5d:  mov    %eax,0x4(%esp)
080ebf8f +0x61:  mov    0xc(%ebp),%eax
080ebf92 +0x64:  mov    %eax,(%esp)
080ebf95 +0x67:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080ebf9a +0x6c:  jmp    080ebfb7 <+0x89>
080ebf9c +0x6e:  mov    %edx,%ebx
080ebf9e +0x70:  mov    %eax,%esi
080ebfa0 +0x72:  lea    -0x14(%ebp),%eax
080ebfa3 +0x75:  mov    %eax,(%esp)
080ebfa6 +0x78:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080ebfab +0x7d:  mov    %esi,%eax
080ebfad +0x7f:  mov    %ebx,%edx
080ebfaf +0x81:  mov    %eax,(%esp)
080ebfb2 +0x84:  call   08ae3750 <_Unwind_Resume>
080ebfb7 +0x89:  lea    -0x14(%ebp),%eax
080ebfba +0x8c:  mov    %eax,(%esp)
080ebfbd +0x8f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080ebfc2 +0x94:  add    $0x20,%esp
080ebfc5 +0x97:  pop    %ebx
080ebfc6 +0x98:  pop    %esi
080ebfc7 +0x99:  pop    %ebp
080ebfc8 +0x9a:  ret
```

## 反编译 C

```c
// CraneMinigameManager::SendCraneItemNeedMaterial @ 0x80ebf2e

/* CraneMinigameManager::SendCraneItemNeedMaterial(CUser*) */

void __thiscall
CraneMinigameManager::SendCraneItemNeedMaterial(CraneMinigameManager *this,CUser *param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080ebf57 to 080ebf99 has its CatchHandler @ 080ebf9c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1a7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)this[0x68]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
