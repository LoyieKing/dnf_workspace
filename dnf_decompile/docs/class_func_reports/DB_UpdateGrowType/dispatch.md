# dispatch

`_ZN17DB_UpdateGrowType8dispatchEiiP6Stream`

`DB_UpdateGrowType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGrowType` | `0x0841819a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841819a  _ZN17DB_UpdateGrowType8dispatchEiiP6Stream
#           DB_UpdateGrowType::dispatch(int, int, Stream*)
# range [0x0841819a, 0x084181e9]
0841819a +0x00:  push   %ebp
0841819b +0x01:  mov    %esp,%ebp
0841819d +0x03:  sub    $0x28,%esp
084181a0 +0x06:  mov    0x14(%ebp),%eax
084181a3 +0x09:  mov    %eax,(%esp)
084181a6 +0x0c:  call   08450dd0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x39e6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x39e6
084181ab +0x11:  mov    %eax,-0xc(%ebp)
084181ae +0x14:  cmpl   $0x0,-0xc(%ebp)
084181b2 +0x18:  jne    084181bb <+0x21>
084181b4 +0x1a:  mov    $0x0,%eax
084181b9 +0x1f:  jmp    084181e7 <+0x4d>
084181bb +0x21:  mov    -0xc(%ebp),%eax
084181be +0x24:  mov    %eax,0x4(%esp)
084181c2 +0x28:  mov    0x8(%ebp),%eax
084181c5 +0x2b:  mov    %eax,(%esp)
084181c8 +0x2e:  call   084181ea <_ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE>  ; DB_UpdateGrowType::UpdateGrowType(SIG_UPDATE_GROWTYPE*)
084181cd +0x33:  mov    %al,-0xd(%ebp)
084181d0 +0x36:  movzbl -0xd(%ebp),%eax
084181d4 +0x3a:  xor    $0x1,%eax
084181d7 +0x3d:  test   %al,%al
084181d9 +0x3f:  je     084181e2 <+0x48>
084181db +0x41:  mov    $0x0,%eax
084181e0 +0x46:  jmp    084181e7 <+0x4d>
084181e2 +0x48:  mov    $0x1,%eax
084181e7 +0x4d:  leave
084181e8 +0x4e:  ret
084181e9 +0x4f:  nop
```

## 反编译 C

```c
// DB_UpdateGrowType::dispatch @ 0x841819a

/* DB_UpdateGrowType::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateGrowType::dispatch(DB_UpdateGrowType *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_UPDATE_GROWTYPE *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_GROWTYPE>(param_3);
  if (pSVar2 == (SIG_UPDATE_GROWTYPE *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = UpdateGrowType(this,pSVar2);
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
