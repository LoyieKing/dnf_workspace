# Finalize

`_ZN8WongWork3IPG10CIPGHelper8FinalizeEv`

`WongWork::IPG::CIPGHelper::Finalize()`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100c92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100c92  _ZN8WongWork3IPG10CIPGHelper8FinalizeEv
#           WongWork::IPG::CIPGHelper::Finalize()
# range [0x08100c92, 0x08100cd1]
08100c92 +0x00:  push   %ebp
08100c93 +0x01:  mov    %esp,%ebp
08100c95 +0x03:  push   %ebx
08100c96 +0x04:  sub    $0x14,%esp
08100c99 +0x07:  mov    0x8(%ebp),%eax
08100c9c +0x0a:  mov    0x4(%eax),%eax
08100c9f +0x0d:  mov    %eax,(%esp)
08100ca2 +0x10:  call   08104600 <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv>  ; WongWork::IPG::CIPGMgr::Finalize()
08100ca7 +0x15:  mov    0x8(%ebp),%eax
08100caa +0x18:  mov    0x4(%eax),%ebx
08100cad +0x1b:  test   %ebx,%ebx
08100caf +0x1d:  je     08100cc1 <+0x2f>
08100cb1 +0x1f:  mov    %ebx,(%esp)
08100cb4 +0x22:  call   08101222 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x244>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x244
08100cb9 +0x27:  mov    %ebx,(%esp)
08100cbc +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08100cc1 +0x2f:  mov    0x8(%ebp),%eax
08100cc4 +0x32:  movl   $0x0,0x4(%eax)
08100ccb +0x39:  add    $0x14,%esp
08100cce +0x3c:  pop    %ebx
08100ccf +0x3d:  pop    %ebp
08100cd0 +0x3e:  ret
08100cd1 +0x3f:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::Finalize @ 0x8100c92

/* WongWork::IPG::CIPGHelper::Finalize() */

void __thiscall WongWork::IPG::CIPGHelper::Finalize(CIPGHelper *this)

{
  CIPGMgr *this_00;
  
  CIPGMgr::Finalize(*(CIPGMgr **)(this + 4));
  this_00 = *(CIPGMgr **)(this + 4);
  if (this_00 != (CIPGMgr *)0x0) {
    CIPGMgr::~CIPGMgr(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
