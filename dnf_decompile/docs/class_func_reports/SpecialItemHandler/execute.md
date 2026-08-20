# execute

`_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827be0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827be0a  _ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827be0a, 0x0827be89]
0827be0a +0x00:  push   %ebp
0827be0b +0x01:  mov    %esp,%ebp
0827be0d +0x03:  sub    $0x18,%esp
0827be10 +0x06:  cmpl   $0xd,0xc(%ebp)
0827be14 +0x0a:  jle    0827be1d <+0x13>
0827be16 +0x0c:  mov    $0x0,%eax
0827be1b +0x11:  jmp    0827be87 <+0x7d>
0827be1d +0x13:  mov    0xc(%ebp),%edx
0827be20 +0x16:  mov    0x8(%ebp),%eax
0827be23 +0x19:  mov    0x4(%eax,%edx,8),%eax
0827be27 +0x1d:  and    $0x1,%eax
0827be2a +0x20:  test   %al,%al
0827be2c +0x22:  je     0827be51 <+0x47>
0827be2e +0x24:  mov    0xc(%ebp),%edx
0827be31 +0x27:  mov    0x8(%ebp),%eax
0827be34 +0x2a:  mov    0x8(%eax,%edx,8),%eax
0827be38 +0x2e:  add    0x8(%ebp),%eax
0827be3b +0x31:  mov    (%eax),%ecx
0827be3d +0x33:  mov    0xc(%ebp),%edx
0827be40 +0x36:  mov    0x8(%ebp),%eax
0827be43 +0x39:  mov    0x4(%eax,%edx,8),%eax
0827be47 +0x3d:  sub    $0x1,%eax
0827be4a +0x40:  lea    (%ecx,%eax,1),%eax
0827be4d +0x43:  mov    (%eax),%eax
0827be4f +0x45:  jmp    0827be5b <+0x51>
0827be51 +0x47:  mov    0xc(%ebp),%edx
0827be54 +0x4a:  mov    0x8(%ebp),%eax
0827be57 +0x4d:  mov    0x4(%eax,%edx,8),%eax
0827be5b +0x51:  mov    0xc(%ebp),%ecx
0827be5e +0x54:  mov    0x8(%ebp),%edx
0827be61 +0x57:  mov    0x8(%edx,%ecx,8),%edx
0827be65 +0x5b:  add    0x8(%ebp),%edx
0827be68 +0x5e:  mov    0x14(%ebp),%ecx
0827be6b +0x61:  mov    %ecx,0xc(%esp)
0827be6f +0x65:  mov    0x10(%ebp),%ecx
0827be72 +0x68:  mov    %ecx,0x8(%esp)
0827be76 +0x6c:  mov    0xc(%ebp),%ecx
0827be79 +0x6f:  mov    %ecx,0x4(%esp)
0827be7d +0x73:  mov    %edx,(%esp)
0827be80 +0x76:  call   *%eax
0827be82 +0x78:  mov    $0x1,%eax
0827be87 +0x7d:  leave
0827be88 +0x7e:  ret
0827be89 +0x7f:  nop
```

## 反编译 C

```c
// SpecialItemHandler::execute @ 0x827be0a

/* SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&) */

undefined4 __thiscall
SpecialItemHandler::execute
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 < 0xe) {
    if ((*(uint *)(this + param_1 * 8 + 4) & 1) == 0) {
      pcVar2 = *(code **)(this + param_1 * 8 + 4);
    }
    else {
      pcVar2 = *(code **)(*(int *)(this + *(int *)(this + param_1 * 8 + 8)) +
                         *(int *)(this + param_1 * 8 + 4) + -1);
    }
    (*pcVar2)(this + *(int *)(this + param_1 * 8 + 8),param_1,param_2,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
