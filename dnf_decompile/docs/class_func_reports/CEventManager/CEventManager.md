# CEventManager

`_ZN13CEventManagerC1Ev`

`CEventManager::CEventManager()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08114ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08114ce4  _ZN13CEventManagerC1Ev
#           CEventManager::CEventManager()
# range [0x08114ce4, 0x08114d4d]
08114ce4 +0x00:  push   %ebp
08114ce5 +0x01:  mov    %esp,%ebp
08114ce7 +0x03:  push   %edi
08114ce8 +0x04:  push   %esi
08114ce9 +0x05:  push   %ebx
08114cea +0x06:  sub    $0x1c,%esp
08114ced +0x09:  mov    0x8(%ebp),%eax
08114cf0 +0x0c:  movl   $0x298,0x8(%esp)
08114cf8 +0x14:  movl   $0x0,0x4(%esp)
08114d00 +0x1c:  mov    %eax,(%esp)
08114d03 +0x1f:  call   0807dcc0 <_init+0x5b8>
08114d08 +0x24:  movl   $0x18,(%esp)
08114d0f +0x2b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114d14 +0x30:  mov    %eax,%ebx
08114d16 +0x32:  mov    %ebx,%eax
08114d18 +0x34:  mov    %eax,(%esp)
08114d1b +0x37:  call   08116386 <_ZN9CDeliveryC1Ev>  ; CDelivery::CDelivery()
08114d20 +0x3c:  jmp    08114d3a <+0x56>
08114d22 +0x3e:  mov    %edx,%esi
08114d24 +0x40:  mov    %eax,%edi
08114d26 +0x42:  mov    %ebx,(%esp)
08114d29 +0x45:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114d2e +0x4a:  mov    %edi,%eax
08114d30 +0x4c:  mov    %esi,%edx
08114d32 +0x4e:  mov    %eax,(%esp)
08114d35 +0x51:  call   08ae3750 <_Unwind_Resume>
08114d3a +0x56:  mov    %ebx,%edx
08114d3c +0x58:  mov    0x8(%ebp),%eax
08114d3f +0x5b:  mov    %edx,0x298(%eax)
08114d45 +0x61:  add    $0x1c,%esp
08114d48 +0x64:  pop    %ebx
08114d49 +0x65:  pop    %esi
08114d4a +0x66:  pop    %edi
08114d4b +0x67:  pop    %ebp
08114d4c +0x68:  ret
08114d4d +0x69:  nop
```

## 反编译 C

```c
// CEventManager::CEventManager @ 0x8114ce4

/* CEventManager::CEventManager() */

void __thiscall CEventManager::CEventManager(CEventManager *this)

{
  CDelivery *this_00;
  
  memset(this,0,0x298);
  this_00 = operator_new(0x18);
                    /* try { // try from 08114d1b to 08114d1f has its CatchHandler @ 08114d22 */
  CDelivery::CDelivery(this_00);
  *(CDelivery **)(this + 0x298) = this_00;
  return;
}
```
