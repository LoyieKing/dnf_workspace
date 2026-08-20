# dispatch

`_ZN12DB_SaveSkill8dispatchEiiP6Stream`

`DB_SaveSkill::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x084177da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084177da  _ZN12DB_SaveSkill8dispatchEiiP6Stream
#           DB_SaveSkill::dispatch(int, int, Stream*)
# range [0x084177da, 0x08417829]
084177da +0x00:  push   %ebp
084177db +0x01:  mov    %esp,%ebp
084177dd +0x03:  sub    $0x28,%esp
084177e0 +0x06:  mov    0x14(%ebp),%eax
084177e3 +0x09:  mov    %eax,(%esp)
084177e6 +0x0c:  call   08450b84 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x379a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x379a
084177eb +0x11:  mov    %eax,-0xc(%ebp)
084177ee +0x14:  cmpl   $0x0,-0xc(%ebp)
084177f2 +0x18:  jne    084177fb <+0x21>
084177f4 +0x1a:  mov    $0x0,%eax
084177f9 +0x1f:  jmp    08417827 <+0x4d>
084177fb +0x21:  mov    -0xc(%ebp),%eax
084177fe +0x24:  mov    %eax,0x4(%esp)
08417802 +0x28:  mov    0x8(%ebp),%eax
08417805 +0x2b:  mov    %eax,(%esp)
08417808 +0x2e:  call   0841782a <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL>  ; DB_SaveSkill::SaveSkill(SIG_LOAD_SKILL*)
0841780d +0x33:  mov    %al,-0xd(%ebp)
08417810 +0x36:  movzbl -0xd(%ebp),%eax
08417814 +0x3a:  xor    $0x1,%eax
08417817 +0x3d:  test   %al,%al
08417819 +0x3f:  je     08417822 <+0x48>
0841781b +0x41:  mov    $0x0,%eax
08417820 +0x46:  jmp    08417827 <+0x4d>
08417822 +0x48:  mov    $0x1,%eax
08417827 +0x4d:  leave
08417828 +0x4e:  ret
08417829 +0x4f:  nop
```

## 反编译 C

```c
// DB_SaveSkill::dispatch @ 0x84177da

/* DB_SaveSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveSkill::dispatch(DB_SaveSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_LOAD_SKILL *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_LOAD_SKILL>(param_3);
  if (pSVar2 == (SIG_LOAD_SKILL *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveSkill(this,pSVar2);
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
