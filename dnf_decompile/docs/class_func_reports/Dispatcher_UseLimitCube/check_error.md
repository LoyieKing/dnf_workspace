# check_error

`_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem`

`Dispatcher_UseLimitCube::check_error(int, unsigned int, int, Inven_Item&, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseLimitCube` | `0x081d3bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3bbc  _ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem
#           Dispatcher_UseLimitCube::check_error(int, unsigned int, int, Inven_Item&, Inven_Item&, CItem const*)
# range [0x081d3bbc, 0x081d3c61]
081d3bbc +0x00:  push   %ebp
081d3bbd +0x01:  mov    %esp,%ebp
081d3bbf +0x03:  sub    $0x18,%esp
081d3bc2 +0x06:  cmpl   $0x0,0x20(%ebp)
081d3bc6 +0x0a:  jne    081d3bd2 <+0x16>
081d3bc8 +0x0c:  mov    $0x11,%eax
081d3bcd +0x11:  jmp    081d3c60 <+0xa4>
081d3bd2 +0x16:  mov    0x18(%ebp),%eax
081d3bd5 +0x19:  mov    0x2(%eax),%eax
081d3bd8 +0x1c:  test   %eax,%eax
081d3bda +0x1e:  je     081d3be7 <+0x2b>
081d3bdc +0x20:  mov    0x18(%ebp),%eax
081d3bdf +0x23:  mov    0x2(%eax),%eax
081d3be2 +0x26:  cmp    0x10(%ebp),%eax
081d3be5 +0x29:  je     081d3bee <+0x32>
081d3be7 +0x2b:  mov    $0x11,%eax
081d3bec +0x30:  jmp    081d3c60 <+0xa4>
081d3bee +0x32:  mov    0x1c(%ebp),%eax
081d3bf1 +0x35:  mov    0x2(%eax),%eax
081d3bf4 +0x38:  test   %eax,%eax
081d3bf6 +0x3a:  jne    081d3bff <+0x43>
081d3bf8 +0x3c:  mov    $0x11,%eax
081d3bfd +0x41:  jmp    081d3c60 <+0xa4>
081d3bff +0x43:  mov    0x20(%ebp),%eax
081d3c02 +0x46:  mov    %eax,(%esp)
081d3c05 +0x49:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d3c0a +0x4e:  xor    $0x1,%eax
081d3c0d +0x51:  test   %al,%al
081d3c0f +0x53:  je     081d3c18 <+0x5c>
081d3c11 +0x55:  mov    $0x11,%eax
081d3c16 +0x5a:  jmp    081d3c60 <+0xa4>
081d3c18 +0x5c:  mov    0x20(%ebp),%eax
081d3c1b +0x5f:  mov    (%eax),%eax
081d3c1d +0x61:  add    $0xc,%eax
081d3c20 +0x64:  mov    (%eax),%edx
081d3c22 +0x66:  mov    0x20(%ebp),%eax
081d3c25 +0x69:  mov    %eax,(%esp)
081d3c28 +0x6c:  call   *%edx
081d3c2a +0x6e:  cmp    $0x1d,%eax
081d3c2d +0x71:  setne  %al
081d3c30 +0x74:  test   %al,%al
081d3c32 +0x76:  je     081d3c3b <+0x7f>
081d3c34 +0x78:  mov    $0x11,%eax
081d3c39 +0x7d:  jmp    081d3c60 <+0xa4>
081d3c3b +0x7f:  mov    0x20(%ebp),%eax
081d3c3e +0x82:  mov    0x10(%ebp),%edx
081d3c41 +0x85:  mov    %edx,0x4(%esp)
081d3c45 +0x89:  mov    %eax,(%esp)
081d3c48 +0x8c:  call   0850fa8a <_ZN14CStackableItem35is_included_material_for_limit_cubeEj>  ; CStackableItem::is_included_material_for_limit_cube(unsigned int)
081d3c4d +0x91:  xor    $0x1,%eax
081d3c50 +0x94:  test   %al,%al
081d3c52 +0x96:  je     081d3c5b <+0x9f>
081d3c54 +0x98:  mov    $0x11,%eax
081d3c59 +0x9d:  jmp    081d3c60 <+0xa4>
081d3c5b +0x9f:  mov    $0x0,%eax
081d3c60 +0xa4:  leave
081d3c61 +0xa5:  ret
```

## 反编译 C

```c
// Dispatcher_UseLimitCube::check_error @ 0x81d3bbc

/* Dispatcher_UseLimitCube::check_error(int, unsigned int, int, Inven_Item&, Inven_Item&, CItem
   const*) */

undefined4 __thiscall
Dispatcher_UseLimitCube::check_error
          (Dispatcher_UseLimitCube *this,int param_1,uint param_2,int param_3,Inven_Item *param_4,
          Inven_Item *param_5,CItem *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_6 == (CItem *)0x0) {
    uVar2 = 0x11;
  }
  else if ((*(int *)(param_4 + 2) == 0) || (*(uint *)(param_4 + 2) != param_2)) {
    uVar2 = 0x11;
  }
  else if (*(int *)(param_5 + 2) == 0) {
    uVar2 = 0x11;
  }
  else {
    cVar1 = CItem::is_stackable(param_6);
    if (cVar1 == '\x01') {
      iVar3 = (**(code **)(*(int *)param_6 + 0xc))(param_6);
      if (iVar3 == 0x1d) {
        cVar1 = CStackableItem::is_included_material_for_limit_cube
                          ((CStackableItem *)param_6,param_2);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x11;
        }
      }
      else {
        uVar2 = 0x11;
      }
    }
    else {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}
```
