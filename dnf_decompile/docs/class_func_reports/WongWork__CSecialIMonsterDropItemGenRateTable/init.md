# init

`_ZN8WongWork35CSecialIMonsterDropItemGenRateTable4initEv`

`WongWork::CSecialIMonsterDropItemGenRateTable::init()`

| 类 | 地址 |
|---|---|
| `WongWork::CSecialIMonsterDropItemGenRateTable` | `0x08534c1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534c1a  _ZN8WongWork35CSecialIMonsterDropItemGenRateTable4initEv
#           WongWork::CSecialIMonsterDropItemGenRateTable::init()
# range [0x08534c1a, 0x08534c9b]
08534c1a +0x00:  push   %ebp
08534c1b +0x01:  mov    %esp,%ebp
08534c1d +0x03:  push   %edi
08534c1e +0x04:  push   %esi
08534c1f +0x05:  push   %ebx
08534c20 +0x06:  sub    $0x2c,%esp
08534c23 +0x09:  mov    0x8(%ebp),%eax
08534c26 +0x0c:  mov    0x211fb0(%eax),%eax
08534c2c +0x12:  test   %eax,%eax
08534c2e +0x14:  je     08534c41 <+0x27>
08534c30 +0x16:  mov    0x8(%ebp),%eax
08534c33 +0x19:  mov    0x211fb0(%eax),%eax
08534c39 +0x1f:  mov    %eax,(%esp)
08534c3c +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08534c41 +0x27:  movl   $0x0,(%esp)
08534c48 +0x2e:  call   0807d750 <_init+0x48>
08534c4d +0x33:  mov    %eax,-0x1c(%ebp)
08534c50 +0x36:  lea    -0x1c(%ebp),%esi
08534c53 +0x39:  movl   $0x9c8,(%esp)
08534c5a +0x40:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08534c5f +0x45:  mov    %eax,%ebx
08534c61 +0x47:  mov    %ebx,%eax
08534c63 +0x49:  mov    %esi,0x4(%esp)
08534c67 +0x4d:  mov    %eax,(%esp)
08534c6a +0x50:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
08534c6f +0x55:  jmp    08534c89 <+0x6f>
08534c71 +0x57:  mov    %edx,%esi
08534c73 +0x59:  mov    %eax,%edi
08534c75 +0x5b:  mov    %ebx,(%esp)
08534c78 +0x5e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08534c7d +0x63:  mov    %edi,%eax
08534c7f +0x65:  mov    %esi,%edx
08534c81 +0x67:  mov    %eax,(%esp)
08534c84 +0x6a:  call   08ae3750 <_Unwind_Resume>
08534c89 +0x6f:  mov    %ebx,%edx
08534c8b +0x71:  mov    0x8(%ebp),%eax
08534c8e +0x74:  mov    %edx,0x211fb0(%eax)
08534c94 +0x7a:  add    $0x2c,%esp
08534c97 +0x7d:  pop    %ebx
08534c98 +0x7e:  pop    %esi
08534c99 +0x7f:  pop    %edi
08534c9a +0x80:  pop    %ebp
08534c9b +0x81:  ret
```

## 反编译 C

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::init @ 0x8534c1a

/* WongWork::CSecialIMonsterDropItemGenRateTable::init() */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::init(CSecialIMonsterDropItemGenRateTable *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  if (*(int *)(this + 0x211fb0) != 0) {
    operator_delete(*(void **)(this + 0x211fb0));
  }
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08534c6a to 08534c6e has its CatchHandler @ 08534c71 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x211fb0) = this_00;
  return;
}
```
