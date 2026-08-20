# getBonusRate

`_ZNK16channel_script_t12getBonusRateEhjj`

`channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `channel_script_t` | `0x088dce3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088dce3c  _ZNK16channel_script_t12getBonusRateEhjj
#           channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
# range [0x088dce3c, 0x088dcee1]
088dce3c +0x00:  push   %ebp
088dce3d +0x01:  mov    %esp,%ebp
088dce3f +0x03:  sub    $0x38,%esp
088dce42 +0x06:  mov    0xc(%ebp),%eax
088dce45 +0x09:  mov    %al,-0x1c(%ebp)
088dce48 +0x0c:  movzbl -0x1c(%ebp),%eax
088dce4c +0x10:  mov    0x10(%ebp),%edx
088dce4f +0x13:  mov    %edx,0x8(%esp)
088dce53 +0x17:  mov    %eax,0x4(%esp)
088dce57 +0x1b:  mov    0x8(%ebp),%eax
088dce5a +0x1e:  mov    %eax,(%esp)
088dce5d +0x21:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
088dce62 +0x26:  mov    %eax,-0xc(%ebp)
088dce65 +0x29:  cmpl   $0x0,-0xc(%ebp)
088dce69 +0x2d:  jne    088dce6f <+0x33>
088dce6b +0x2f:  fldz
088dce6d +0x31:  jmp    088dcee0 <+0xa4>
088dce6f +0x33:  mov    -0xc(%ebp),%eax
088dce72 +0x36:  mov    0x10(%eax),%eax
088dce75 +0x39:  test   %eax,%eax
088dce77 +0x3b:  jne    088dce7d <+0x41>
088dce79 +0x3d:  fldz
088dce7b +0x3f:  jmp    088dcee0 <+0xa4>
088dce7d +0x41:  movl   $0x0,-0x10(%ebp)
088dce84 +0x48:  jmp    088dcec6 <+0x8a>
088dce86 +0x4a:  mov    -0xc(%ebp),%eax
088dce89 +0x4d:  mov    0x10(%eax),%eax
088dce8c +0x50:  mov    -0x10(%ebp),%edx
088dce8f +0x53:  mov    %edx,0x4(%esp)
088dce93 +0x57:  mov    %eax,(%esp)
088dce96 +0x5a:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
088dce9b +0x5f:  mov    (%eax),%eax
088dce9d +0x61:  cmp    0x14(%ebp),%eax
088dcea0 +0x64:  sete   %al
088dcea3 +0x67:  test   %al,%al
088dcea5 +0x69:  je     088dcec2 <+0x86>
088dcea7 +0x6b:  mov    -0xc(%ebp),%eax
088dceaa +0x6e:  movzbl 0x14(%eax),%eax
088dceae +0x72:  movzbl %al,%eax
088dceb1 +0x75:  mov    %ax,-0x1e(%ebp)
088dceb5 +0x79:  filds  -0x1e(%ebp)
088dceb8 +0x7c:  flds   ""
088dcebe +0x82:  fdivrp %st,%st(1)
088dcec0 +0x84:  jmp    088dcee0 <+0xa4>
088dcec2 +0x86:  addl   $0x1,-0x10(%ebp)
088dcec6 +0x8a:  mov    -0xc(%ebp),%eax
088dcec9 +0x8d:  mov    0x10(%eax),%eax
088dcecc +0x90:  mov    %eax,(%esp)
088dcecf +0x93:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
088dced4 +0x98:  cmp    -0x10(%ebp),%eax
088dced7 +0x9b:  seta   %al
088dceda +0x9e:  test   %al,%al
088dcedc +0xa0:  jne    088dce86 <+0x4a>
088dcede +0xa2:  fldz
088dcee0 +0xa4:  leave
088dcee1 +0xa5:  ret
```

## 反编译 C

```c
// channel_script_t::getBonusRate @ 0x88dce3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const */

longdouble __thiscall
channel_script_t::getBonusRate(channel_script_t *this,uchar param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14;
  
  iVar1 = getChannelInfo(this,param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    for (local_14 = 0;
        uVar3 = std::vector<int,std::allocator<int>>::size
                          (*(vector<int,std::allocator<int>> **)(iVar1 + 0x10)), local_14 < uVar3;
        local_14 = local_14 + 1) {
      puVar2 = (uint *)std::vector<int,std::allocator<int>>::at
                                 (*(vector<int,std::allocator<int>> **)(iVar1 + 0x10),local_14);
      if (*puVar2 == param_3) {
        return (longdouble)*(byte *)(iVar1 + 0x14) / (longdouble)_DAT_08e0c034;
      }
    }
  }
  return (longdouble)0;
}
```
