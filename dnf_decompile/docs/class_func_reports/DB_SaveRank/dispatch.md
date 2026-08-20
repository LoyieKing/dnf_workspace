# dispatch

`_ZN11DB_SaveRank8dispatchEiiP6Stream`

`DB_SaveRank::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveRank` | `0x084174c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084174c0  _ZN11DB_SaveRank8dispatchEiiP6Stream
#           DB_SaveRank::dispatch(int, int, Stream*)
# range [0x084174c0, 0x0841750f]
084174c0 +0x00:  push   %ebp
084174c1 +0x01:  mov    %esp,%ebp
084174c3 +0x03:  sub    $0x28,%esp
084174c6 +0x06:  mov    0x14(%ebp),%eax
084174c9 +0x09:  mov    %eax,(%esp)
084174cc +0x0c:  call   08450b30 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3746>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3746
084174d1 +0x11:  mov    %eax,-0xc(%ebp)
084174d4 +0x14:  cmpl   $0x0,-0xc(%ebp)
084174d8 +0x18:  jne    084174e1 <+0x21>
084174da +0x1a:  mov    $0x0,%eax
084174df +0x1f:  jmp    0841750d <+0x4d>
084174e1 +0x21:  mov    -0xc(%ebp),%eax
084174e4 +0x24:  mov    %eax,0x4(%esp)
084174e8 +0x28:  mov    0x8(%ebp),%eax
084174eb +0x2b:  mov    %eax,(%esp)
084174ee +0x2e:  call   08417510 <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK>  ; DB_SaveRank::SaveRankAll(SIG_SAVE_RANK*)
084174f3 +0x33:  mov    %al,-0xd(%ebp)
084174f6 +0x36:  movzbl -0xd(%ebp),%eax
084174fa +0x3a:  xor    $0x1,%eax
084174fd +0x3d:  test   %al,%al
084174ff +0x3f:  je     08417508 <+0x48>
08417501 +0x41:  mov    $0x0,%eax
08417506 +0x46:  jmp    0841750d <+0x4d>
08417508 +0x48:  mov    $0x1,%eax
0841750d +0x4d:  leave
0841750e +0x4e:  ret
0841750f +0x4f:  nop
```

## 反编译 C

```c
// DB_SaveRank::dispatch @ 0x84174c0

/* DB_SaveRank::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveRank::dispatch(DB_SaveRank *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_RANK *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_RANK>(param_3);
  if (pSVar2 == (SIG_SAVE_RANK *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveRankAll(this,pSVar2);
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
