# tag2EndType

`_ZN20stStackableBooster_t11tag2EndTypeEPKc`

`stStackableBooster_t::tag2EndType(char const*)`

| 类 | 地址 |
|---|---|
| `stStackableBooster_t` | `0x089c295a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089c295a  _ZN20stStackableBooster_t11tag2EndTypeEPKc
#           stStackableBooster_t::tag2EndType(char const*)
# range [0x089c295a, 0x089c2a80]
089c295a +0x000:  push   %ebp
089c295b +0x001:  mov    %esp,%ebp
089c295d +0x003:  sub    $0x18,%esp
089c2960 +0x006:  movl   $"[/avatar]",0x4(%esp)
089c2968 +0x00e:  mov    0xc(%ebp),%eax
089c296b +0x011:  mov    %eax,(%esp)
089c296e +0x014:  call   0807e4e0 <_init+0xdd8>
089c2973 +0x019:  test   %eax,%eax
089c2975 +0x01b:  jne    089c2981 <+0x27>
089c2977 +0x01d:  mov    $0x0,%eax
089c297c +0x022:  jmp    089c2a7f <+0x125>
089c2981 +0x027:  movl   $"[/special avatar]",0x4(%esp)
089c2989 +0x02f:  mov    0xc(%ebp),%eax
089c298c +0x032:  mov    %eax,(%esp)
089c298f +0x035:  call   0807e4e0 <_init+0xdd8>
089c2994 +0x03a:  test   %eax,%eax
089c2996 +0x03c:  jne    089c29a2 <+0x48>
089c2998 +0x03e:  mov    $0x1,%eax
089c299d +0x043:  jmp    089c2a7f <+0x125>
089c29a2 +0x048:  movl   $"[/cera]",0x4(%esp)
089c29aa +0x050:  mov    0xc(%ebp),%eax
089c29ad +0x053:  mov    %eax,(%esp)
089c29b0 +0x056:  call   0807e4e0 <_init+0xdd8>
089c29b5 +0x05b:  test   %eax,%eax
089c29b7 +0x05d:  jne    089c29c3 <+0x69>
089c29b9 +0x05f:  mov    $0x2,%eax
089c29be +0x064:  jmp    089c2a7f <+0x125>
089c29c3 +0x069:  movl   $"[/creature]",0x4(%esp)
089c29cb +0x071:  mov    0xc(%ebp),%eax
089c29ce +0x074:  mov    %eax,(%esp)
089c29d1 +0x077:  call   0807e4e0 <_init+0xdd8>
089c29d6 +0x07c:  test   %eax,%eax
089c29d8 +0x07e:  jne    089c29e4 <+0x8a>
089c29da +0x080:  mov    $0x3,%eax
089c29df +0x085:  jmp    089c2a7f <+0x125>
089c29e4 +0x08a:  movl   $"[/equipment]",0x4(%esp)
089c29ec +0x092:  mov    0xc(%ebp),%eax
089c29ef +0x095:  mov    %eax,(%esp)
089c29f2 +0x098:  call   0807e4e0 <_init+0xdd8>
089c29f7 +0x09d:  test   %eax,%eax
089c29f9 +0x09f:  jne    089c2a02 <+0xa8>
089c29fb +0x0a1:  mov    $0x4,%eax
089c2a00 +0x0a6:  jmp    089c2a7f <+0x125>
089c2a02 +0x0a8:  movl   $"[/stackable]",0x4(%esp)
089c2a0a +0x0b0:  mov    0xc(%ebp),%eax
089c2a0d +0x0b3:  mov    %eax,(%esp)
089c2a10 +0x0b6:  call   0807e4e0 <_init+0xdd8>
089c2a15 +0x0bb:  test   %eax,%eax
089c2a17 +0x0bd:  jne    089c2a20 <+0xc6>
089c2a19 +0x0bf:  mov    $0x5,%eax
089c2a1e +0x0c4:  jmp    089c2a7f <+0x125>
089c2a20 +0x0c6:  movl   $"[/etc]",0x4(%esp)
089c2a28 +0x0ce:  mov    0xc(%ebp),%eax
089c2a2b +0x0d1:  mov    %eax,(%esp)
089c2a2e +0x0d4:  call   0807e4e0 <_init+0xdd8>
089c2a33 +0x0d9:  test   %eax,%eax
089c2a35 +0x0db:  jne    089c2a3e <+0xe4>
089c2a37 +0x0dd:  mov    $0x6,%eax
089c2a3c +0x0e2:  jmp    089c2a7f <+0x125>
089c2a3e +0x0e4:  movl   $"[/special creature]",0x4(%esp)
089c2a46 +0x0ec:  mov    0xc(%ebp),%eax
089c2a49 +0x0ef:  mov    %eax,(%esp)
089c2a4c +0x0f2:  call   0807e4e0 <_init+0xdd8>
089c2a51 +0x0f7:  test   %eax,%eax
089c2a53 +0x0f9:  jne    089c2a5c <+0x102>
089c2a55 +0x0fb:  mov    $0x7,%eax
089c2a5a +0x100:  jmp    089c2a7f <+0x125>
089c2a5c +0x102:  movl   $"[/emblem]",0x4(%esp)
089c2a64 +0x10a:  mov    0xc(%ebp),%eax
089c2a67 +0x10d:  mov    %eax,(%esp)
089c2a6a +0x110:  call   0807e4e0 <_init+0xdd8>
089c2a6f +0x115:  test   %eax,%eax
089c2a71 +0x117:  jne    089c2a7a <+0x120>
089c2a73 +0x119:  mov    $0x8,%eax
089c2a78 +0x11e:  jmp    089c2a7f <+0x125>
089c2a7a +0x120:  mov    $0x9,%eax
089c2a7f +0x125:  leave
089c2a80 +0x126:  ret
```

## 反编译 C

```c
// stStackableBooster_t::tag2EndType @ 0x89c295a

/* stStackableBooster_t::tag2EndType(char const*) */

undefined4 __thiscall stStackableBooster_t::tag2EndType(stStackableBooster_t *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"[/avatar]");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"[/special avatar]");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"[/cera]");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"[/creature]");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"[/equipment]");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"[/stackable]");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"[/etc]");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"[/special creature]");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"[/emblem]");
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
