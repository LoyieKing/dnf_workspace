# Initialize

`_ZN8WongWork3IPG10CIPGHelper10InitializeEjj`

`WongWork::IPG::CIPGHelper::Initialize(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100b3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100b3e  _ZN8WongWork3IPG10CIPGHelper10InitializeEjj
#           WongWork::IPG::CIPGHelper::Initialize(unsigned int, unsigned int)
# range [0x08100b3e, 0x08100c91]
08100b3e +0x000:  push   %ebp
08100b3f +0x001:  mov    %esp,%ebp
08100b41 +0x003:  push   %edi
08100b42 +0x004:  push   %esi
08100b43 +0x005:  push   %ebx
08100b44 +0x006:  sub    $0x1c,%esp
08100b47 +0x009:  mov    0x8(%ebp),%eax
08100b4a +0x00c:  mov    0x4(%eax),%eax
08100b4d +0x00f:  test   %eax,%eax
08100b4f +0x011:  je     08100b5c <+0x1e>
08100b51 +0x013:  mov    0x8(%ebp),%eax
08100b54 +0x016:  mov    %eax,(%esp)
08100b57 +0x019:  call   08100c92 <_ZN8WongWork3IPG10CIPGHelper8FinalizeEv>  ; WongWork::IPG::CIPGHelper::Finalize()
08100b5c +0x01e:  mov    0x8(%ebp),%eax
08100b5f +0x021:  movl   $0x2b0,0x8(%eax)
08100b66 +0x028:  mov    0x8(%ebp),%eax
08100b69 +0x02b:  movl   $0x1cb,0xc(%eax)
08100b70 +0x032:  mov    0x8(%ebp),%eax
08100b73 +0x035:  movl   $0x1fc,0x10(%eax)
08100b7a +0x03c:  mov    0x8(%ebp),%eax
08100b7d +0x03f:  movl   $0x1d4,0x14(%eax)
08100b84 +0x046:  mov    0x8(%ebp),%eax
08100b87 +0x049:  movl   $0x99,0x18(%eax)
08100b8e +0x050:  mov    0x8(%ebp),%eax
08100b91 +0x053:  movl   $0x1d4,0x1c(%eax)
08100b98 +0x05a:  mov    0x8(%ebp),%eax
08100b9b +0x05d:  movl   $0x90,0x20(%eax)
08100ba2 +0x064:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08100ba7 +0x069:  add    $0x2b8,%eax
08100bac +0x06e:  movzbl (%eax),%eax
08100baf +0x071:  test   %al,%al
08100bb1 +0x073:  sete   %al
08100bb4 +0x076:  test   %al,%al
08100bb6 +0x078:  je     08100bc2 <+0x84>
08100bb8 +0x07a:  mov    $0xffffffff,%eax
08100bbd +0x07f:  jmp    08100c89 <+0x14b>
08100bc2 +0x084:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08100bc7 +0x089:  add    $0x2b8,%eax
08100bcc +0x08e:  mov    0x8(%ebp),%edx
08100bcf +0x091:  add    $0x24,%edx
08100bd2 +0x094:  movl   $0x14,0x8(%esp)
08100bda +0x09c:  mov    %eax,0x4(%esp)
08100bde +0x0a0:  mov    %edx,(%esp)
08100be1 +0x0a3:  call   0807d8d0 <_init+0x1c8>
08100be6 +0x0a8:  mov    0x8(%ebp),%eax
08100be9 +0x0ab:  movl   $0x5a3c,0x38(%eax)
08100bf0 +0x0b2:  mov    0x8(%ebp),%eax
08100bf3 +0x0b5:  movl   $0x5aa0,0x3c(%eax)
08100bfa +0x0bc:  mov    0x8(%ebp),%eax
08100bfd +0x0bf:  movl   $0x5b04,0x40(%eax)
08100c04 +0x0c6:  mov    0x8(%ebp),%eax
08100c07 +0x0c9:  movl   $0x5b68,0x44(%eax)
08100c0e +0x0d0:  mov    0x8(%ebp),%eax
08100c11 +0x0d3:  movl   $0x5bcc,0x48(%eax)
08100c18 +0x0da:  mov    0x8(%ebp),%eax
08100c1b +0x0dd:  movl   $0x232e,0x4c(%eax)
08100c22 +0x0e4:  mov    0x8(%ebp),%eax
08100c25 +0x0e7:  movl   $0x0,0x50(%eax)
08100c2c +0x0ee:  movl   $0xf0,(%esp)
08100c33 +0x0f5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08100c38 +0x0fa:  mov    %eax,%ebx
08100c3a +0x0fc:  mov    0x8(%ebp),%edx
08100c3d +0x0ff:  mov    %ebx,%eax
08100c3f +0x101:  mov    %edx,0x4(%esp)
08100c43 +0x105:  mov    %eax,(%esp)
08100c46 +0x108:  call   08101108 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x12a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x12a
08100c4b +0x10d:  jmp    08100c65 <+0x127>
08100c4d +0x10f:  mov    %edx,%esi
08100c4f +0x111:  mov    %eax,%edi
08100c51 +0x113:  mov    %ebx,(%esp)
08100c54 +0x116:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08100c59 +0x11b:  mov    %edi,%eax
08100c5b +0x11d:  mov    %esi,%edx
08100c5d +0x11f:  mov    %eax,(%esp)
08100c60 +0x122:  call   08ae3750 <_Unwind_Resume>
08100c65 +0x127:  mov    %ebx,%edx
08100c67 +0x129:  mov    0x8(%ebp),%eax
08100c6a +0x12c:  mov    %edx,0x4(%eax)
08100c6d +0x12f:  mov    0x8(%ebp),%eax
08100c70 +0x132:  mov    0x4(%eax),%eax
08100c73 +0x135:  mov    0x10(%ebp),%edx
08100c76 +0x138:  mov    %edx,0x8(%esp)
08100c7a +0x13c:  mov    0xc(%ebp),%edx
08100c7d +0x13f:  mov    %edx,0x4(%esp)
08100c81 +0x143:  mov    %eax,(%esp)
08100c84 +0x146:  call   08104494 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj>  ; WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int)
08100c89 +0x14b:  add    $0x1c,%esp
08100c8c +0x14e:  pop    %ebx
08100c8d +0x14f:  pop    %esi
08100c8e +0x150:  pop    %edi
08100c8f +0x151:  pop    %ebp
08100c90 +0x152:  ret
08100c91 +0x153:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::Initialize @ 0x8100b3e

/* WongWork::IPG::CIPGHelper::Initialize(unsigned int, unsigned int) */

undefined4 __thiscall
WongWork::IPG::CIPGHelper::Initialize(CIPGHelper *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  CIPGMgr *this_00;
  
  if (*(int *)(this + 4) != 0) {
    Finalize(this);
  }
  *(undefined4 *)(this + 8) = 0x2b0;
  *(undefined4 *)(this + 0xc) = 0x1cb;
  *(undefined4 *)(this + 0x10) = 0x1fc;
  *(undefined4 *)(this + 0x14) = 0x1d4;
  *(undefined4 *)(this + 0x18) = 0x99;
  *(undefined4 *)(this + 0x1c) = 0x1d4;
  *(undefined4 *)(this + 0x20) = 0x90;
  iVar1 = G_CEnvironment();
  if (*(char *)(iVar1 + 0x2b8) == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = G_CEnvironment();
    strncpy((char *)(this + 0x24),(char *)(iVar1 + 0x2b8),0x14);
    *(undefined4 *)(this + 0x38) = 0x5a3c;
    *(undefined4 *)(this + 0x3c) = 0x5aa0;
    *(undefined4 *)(this + 0x40) = 0x5b04;
    *(undefined4 *)(this + 0x44) = 0x5b68;
    *(undefined4 *)(this + 0x48) = 0x5bcc;
    *(undefined4 *)(this + 0x4c) = 0x232e;
    *(undefined4 *)(this + 0x50) = 0;
    this_00 = operator_new(0xf0);
                    /* try { // try from 08100c46 to 08100c4a has its CatchHandler @ 08100c4d */
    CIPGMgr::CIPGMgr(this_00,(IIPGHelperInterface *)this);
    *(CIPGMgr **)(this + 4) = this_00;
    uVar2 = CIPGMgr::Initialize(*(CIPGMgr **)(this + 4),param_1,param_2);
  }
  return uVar2;
}
```
