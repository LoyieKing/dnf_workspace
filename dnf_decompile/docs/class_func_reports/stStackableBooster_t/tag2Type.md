# tag2Type

`_ZN20stStackableBooster_t8tag2TypeEPKc`

`stStackableBooster_t::tag2Type(char const*)`

| 类 | 地址 |
|---|---|
| `stStackableBooster_t` | `0x089c2832` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089c2832  _ZN20stStackableBooster_t8tag2TypeEPKc
#           stStackableBooster_t::tag2Type(char const*)
# range [0x089c2832, 0x089c2959]
089c2832 +0x000:  push   %ebp
089c2833 +0x001:  mov    %esp,%ebp
089c2835 +0x003:  sub    $0x18,%esp
089c2838 +0x006:  movl   $"[avatar]",0x4(%esp)
089c2840 +0x00e:  mov    0xc(%ebp),%eax
089c2843 +0x011:  mov    %eax,(%esp)
089c2846 +0x014:  call   0807e4e0 <_init+0xdd8>
089c284b +0x019:  test   %eax,%eax
089c284d +0x01b:  jne    089c2859 <+0x27>
089c284f +0x01d:  mov    $0x0,%eax
089c2854 +0x022:  jmp    089c2957 <+0x125>
089c2859 +0x027:  movl   $"[special avatar]",0x4(%esp)
089c2861 +0x02f:  mov    0xc(%ebp),%eax
089c2864 +0x032:  mov    %eax,(%esp)
089c2867 +0x035:  call   0807e4e0 <_init+0xdd8>
089c286c +0x03a:  test   %eax,%eax
089c286e +0x03c:  jne    089c287a <+0x48>
089c2870 +0x03e:  mov    $0x1,%eax
089c2875 +0x043:  jmp    089c2957 <+0x125>
089c287a +0x048:  movl   $"[cera]",0x4(%esp)
089c2882 +0x050:  mov    0xc(%ebp),%eax
089c2885 +0x053:  mov    %eax,(%esp)
089c2888 +0x056:  call   0807e4e0 <_init+0xdd8>
089c288d +0x05b:  test   %eax,%eax
089c288f +0x05d:  jne    089c289b <+0x69>
089c2891 +0x05f:  mov    $0x2,%eax
089c2896 +0x064:  jmp    089c2957 <+0x125>
089c289b +0x069:  movl   $"[creature]",0x4(%esp)
089c28a3 +0x071:  mov    0xc(%ebp),%eax
089c28a6 +0x074:  mov    %eax,(%esp)
089c28a9 +0x077:  call   0807e4e0 <_init+0xdd8>
089c28ae +0x07c:  test   %eax,%eax
089c28b0 +0x07e:  jne    089c28bc <+0x8a>
089c28b2 +0x080:  mov    $0x3,%eax
089c28b7 +0x085:  jmp    089c2957 <+0x125>
089c28bc +0x08a:  movl   $"[equipment]",0x4(%esp)
089c28c4 +0x092:  mov    0xc(%ebp),%eax
089c28c7 +0x095:  mov    %eax,(%esp)
089c28ca +0x098:  call   0807e4e0 <_init+0xdd8>
089c28cf +0x09d:  test   %eax,%eax
089c28d1 +0x09f:  jne    089c28da <+0xa8>
089c28d3 +0x0a1:  mov    $0x4,%eax
089c28d8 +0x0a6:  jmp    089c2957 <+0x125>
089c28da +0x0a8:  movl   $"[stackable]",0x4(%esp)
089c28e2 +0x0b0:  mov    0xc(%ebp),%eax
089c28e5 +0x0b3:  mov    %eax,(%esp)
089c28e8 +0x0b6:  call   0807e4e0 <_init+0xdd8>
089c28ed +0x0bb:  test   %eax,%eax
089c28ef +0x0bd:  jne    089c28f8 <+0xc6>
089c28f1 +0x0bf:  mov    $0x5,%eax
089c28f6 +0x0c4:  jmp    089c2957 <+0x125>
089c28f8 +0x0c6:  movl   $"[etc]",0x4(%esp)
089c2900 +0x0ce:  mov    0xc(%ebp),%eax
089c2903 +0x0d1:  mov    %eax,(%esp)
089c2906 +0x0d4:  call   0807e4e0 <_init+0xdd8>
089c290b +0x0d9:  test   %eax,%eax
089c290d +0x0db:  jne    089c2916 <+0xe4>
089c290f +0x0dd:  mov    $0x6,%eax
089c2914 +0x0e2:  jmp    089c2957 <+0x125>
089c2916 +0x0e4:  movl   $"[special creature]",0x4(%esp)
089c291e +0x0ec:  mov    0xc(%ebp),%eax
089c2921 +0x0ef:  mov    %eax,(%esp)
089c2924 +0x0f2:  call   0807e4e0 <_init+0xdd8>
089c2929 +0x0f7:  test   %eax,%eax
089c292b +0x0f9:  jne    089c2934 <+0x102>
089c292d +0x0fb:  mov    $0x7,%eax
089c2932 +0x100:  jmp    089c2957 <+0x125>
089c2934 +0x102:  movl   $"[emblem]",0x4(%esp)
089c293c +0x10a:  mov    0xc(%ebp),%eax
089c293f +0x10d:  mov    %eax,(%esp)
089c2942 +0x110:  call   0807e4e0 <_init+0xdd8>
089c2947 +0x115:  test   %eax,%eax
089c2949 +0x117:  jne    089c2952 <+0x120>
089c294b +0x119:  mov    $0x8,%eax
089c2950 +0x11e:  jmp    089c2957 <+0x125>
089c2952 +0x120:  mov    $0x9,%eax
089c2957 +0x125:  leave
089c2958 +0x126:  ret
089c2959 +0x127:  nop
```

## 反编译 C

```c
// stStackableBooster_t::tag2Type @ 0x89c2832

/* stStackableBooster_t::tag2Type(char const*) */

undefined4 __thiscall stStackableBooster_t::tag2Type(stStackableBooster_t *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"[avatar]");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"[special avatar]");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"[cera]");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"[creature]");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"[equipment]");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"[stackable]");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"[etc]");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"[special creature]");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"[emblem]");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    uVar2 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}
```
