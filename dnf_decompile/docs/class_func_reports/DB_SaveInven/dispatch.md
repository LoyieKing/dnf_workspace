# dispatch

`_ZN12DB_SaveInven8dispatchEiiP6Stream`

`DB_SaveInven::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416aac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416aac  _ZN12DB_SaveInven8dispatchEiiP6Stream
#           DB_SaveInven::dispatch(int, int, Stream*)
# range [0x08416aac, 0x08416b37]
08416aac +0x00:  push   %ebp
08416aad +0x01:  mov    %esp,%ebp
08416aaf +0x03:  sub    $0x28,%esp
08416ab2 +0x06:  mov    0x14(%ebp),%eax
08416ab5 +0x09:  mov    %eax,(%esp)
08416ab8 +0x0c:  call   08450a88 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x369e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x369e
08416abd +0x11:  mov    %eax,-0xc(%ebp)
08416ac0 +0x14:  cmpl   $0x0,-0xc(%ebp)
08416ac4 +0x18:  jne    08416acd <+0x21>
08416ac6 +0x1a:  mov    $0x0,%eax
08416acb +0x1f:  jmp    08416b36 <+0x8a>
08416acd +0x21:  mov    -0xc(%ebp),%eax
08416ad0 +0x24:  mov    %eax,0x4(%esp)
08416ad4 +0x28:  mov    0x8(%ebp),%eax
08416ad7 +0x2b:  mov    %eax,(%esp)
08416ada +0x2e:  call   08416cfa <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY>  ; DB_SaveInven::SaveInven(SIG_SAVE_INVENTORY*)
08416adf +0x33:  mov    %al,-0xd(%ebp)
08416ae2 +0x36:  movzbl -0xd(%ebp),%eax
08416ae6 +0x3a:  xor    $0x1,%eax
08416ae9 +0x3d:  test   %al,%al
08416aeb +0x3f:  je     08416af4 <+0x48>
08416aed +0x41:  mov    $0x0,%eax
08416af2 +0x46:  jmp    08416b36 <+0x8a>
08416af4 +0x48:  mov    -0xc(%ebp),%eax
08416af7 +0x4b:  movzbl 0x8(%eax),%eax
08416afb +0x4f:  test   %al,%al
08416afd +0x51:  je     08416b0a <+0x5e>
08416aff +0x53:  mov    -0xc(%ebp),%eax
08416b02 +0x56:  movzbl 0x8(%eax),%eax
08416b06 +0x5a:  cmp    $0x2,%al
08416b08 +0x5c:  jne    08416b31 <+0x85>
08416b0a +0x5e:  mov    -0xc(%ebp),%eax
08416b0d +0x61:  mov    %eax,0x4(%esp)
08416b11 +0x65:  mov    0x8(%ebp),%eax
08416b14 +0x68:  mov    %eax,(%esp)
08416b17 +0x6b:  call   08416b38 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY>  ; DB_SaveInven::_saveCharacInvenExpand(SIG_SAVE_INVENTORY*) const
08416b1c +0x70:  mov    %al,-0xd(%ebp)
08416b1f +0x73:  movzbl -0xd(%ebp),%eax
08416b23 +0x77:  xor    $0x1,%eax
08416b26 +0x7a:  test   %al,%al
08416b28 +0x7c:  je     08416b31 <+0x85>
08416b2a +0x7e:  mov    $0x0,%eax
08416b2f +0x83:  jmp    08416b36 <+0x8a>
08416b31 +0x85:  mov    $0x1,%eax
08416b36 +0x8a:  leave
08416b37 +0x8b:  ret
```

## 反编译 C

```c
// DB_SaveInven::dispatch @ 0x8416aac

/* DB_SaveInven::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveInven::dispatch(DB_SaveInven *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_INVENTORY *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_INVENTORY>(param_3);
  if (pSVar2 == (SIG_SAVE_INVENTORY *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveInven(this,pSVar2);
    if (cVar1 == '\x01') {
      if (((pSVar2[8] == (SIG_SAVE_INVENTORY)0x0) || (pSVar2[8] == (SIG_SAVE_INVENTORY)0x2)) &&
         (cVar1 = _saveCharacInvenExpand(this,pSVar2), cVar1 != '\x01')) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
