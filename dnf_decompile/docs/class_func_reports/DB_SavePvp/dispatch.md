# dispatch

`_ZN10DB_SavePvp8dispatchEiiP6Stream`

`DB_SavePvp::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePvp` | `0x08417278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417278  _ZN10DB_SavePvp8dispatchEiiP6Stream
#           DB_SavePvp::dispatch(int, int, Stream*)
# range [0x08417278, 0x084172c7]
08417278 +0x00:  push   %ebp
08417279 +0x01:  mov    %esp,%ebp
0841727b +0x03:  sub    $0x28,%esp
0841727e +0x06:  mov    0x14(%ebp),%eax
08417281 +0x09:  mov    %eax,(%esp)
08417284 +0x0c:  call   08450adc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x36f2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x36f2
08417289 +0x11:  mov    %eax,-0xc(%ebp)
0841728c +0x14:  cmpl   $0x0,-0xc(%ebp)
08417290 +0x18:  jne    08417299 <+0x21>
08417292 +0x1a:  mov    $0x0,%eax
08417297 +0x1f:  jmp    084172c5 <+0x4d>
08417299 +0x21:  mov    -0xc(%ebp),%eax
0841729c +0x24:  mov    %eax,0x4(%esp)
084172a0 +0x28:  mov    0x8(%ebp),%eax
084172a3 +0x2b:  mov    %eax,(%esp)
084172a6 +0x2e:  call   084172c8 <_ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP>  ; DB_SavePvp::SavePvp(SIG_SAVE_PVP*)
084172ab +0x33:  mov    %al,-0xd(%ebp)
084172ae +0x36:  movzbl -0xd(%ebp),%eax
084172b2 +0x3a:  xor    $0x1,%eax
084172b5 +0x3d:  test   %al,%al
084172b7 +0x3f:  je     084172c0 <+0x48>
084172b9 +0x41:  mov    $0x0,%eax
084172be +0x46:  jmp    084172c5 <+0x4d>
084172c0 +0x48:  mov    $0x1,%eax
084172c5 +0x4d:  leave
084172c6 +0x4e:  ret
084172c7 +0x4f:  nop
```

## 反编译 C

```c
// DB_SavePvp::dispatch @ 0x8417278

/* DB_SavePvp::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_SavePvp::dispatch(DB_SavePvp *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_PVP *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_PVP>(param_3);
  if (pSVar2 == (SIG_SAVE_PVP *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SavePvp(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
