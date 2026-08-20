# _itemTypeVerify

`_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem`

`WongWork::CItemGenRateTable::_itemTypeVerify(int, CItem const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenRateTable` | `0x08534906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534906  _ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem
#           WongWork::CItemGenRateTable::_itemTypeVerify(int, CItem const*)
# range [0x08534906, 0x085349a3]
08534906 +0x00:  push   %ebp
08534907 +0x01:  mov    %esp,%ebp
08534909 +0x03:  sub    $0x18,%esp
0853490c +0x06:  mov    0x10(%ebp),%eax
0853490f +0x09:  mov    %eax,(%esp)
08534912 +0x0c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08534917 +0x11:  test   %al,%al
08534919 +0x13:  je     0853495c <+0x56>
0853491b +0x15:  mov    0x10(%ebp),%eax
0853491e +0x18:  mov    (%eax),%eax
08534920 +0x1a:  add    $0xc,%eax
08534923 +0x1d:  mov    (%eax),%edx
08534925 +0x1f:  mov    0x10(%ebp),%eax
08534928 +0x22:  mov    %eax,(%esp)
0853492b +0x25:  call   *%edx
0853492d +0x27:  cmp    $0x3,%eax
08534930 +0x2a:  jne    0853493f <+0x39>
08534932 +0x2c:  cmpl   $0x3,0xc(%ebp)
08534936 +0x30:  jne    0853493f <+0x39>
08534938 +0x32:  mov    $0x1,%eax
0853493d +0x37:  jmp    08534944 <+0x3e>
0853493f +0x39:  mov    $0x0,%eax
08534944 +0x3e:  test   %al,%al
08534946 +0x40:  je     0853494f <+0x49>
08534948 +0x42:  mov    $0x1,%eax
0853494d +0x47:  jmp    085349a1 <+0x9b>
0853494f +0x49:  cmpl   $0x1,0xc(%ebp)
08534953 +0x4d:  jne    0853499c <+0x96>
08534955 +0x4f:  mov    $0x1,%eax
0853495a +0x54:  jmp    085349a1 <+0x9b>
0853495c +0x56:  mov    0x10(%ebp),%eax
0853495f +0x59:  mov    (%eax),%eax
08534961 +0x5b:  add    $0x14,%eax
08534964 +0x5e:  mov    (%eax),%edx
08534966 +0x60:  mov    0x10(%ebp),%eax
08534969 +0x63:  mov    %eax,(%esp)
0853496c +0x66:  call   *%edx
0853496e +0x68:  test   %al,%al
08534970 +0x6a:  je     0853497f <+0x79>
08534972 +0x6c:  cmpl   $0x4,0xc(%ebp)
08534976 +0x70:  jne    0853497f <+0x79>
08534978 +0x72:  mov    $0x1,%eax
0853497d +0x77:  jmp    08534984 <+0x7e>
0853497f +0x79:  mov    $0x0,%eax
08534984 +0x7e:  test   %al,%al
08534986 +0x80:  je     0853498f <+0x89>
08534988 +0x82:  mov    $0x1,%eax
0853498d +0x87:  jmp    085349a1 <+0x9b>
0853498f +0x89:  cmpl   $0x2,0xc(%ebp)
08534993 +0x8d:  jne    0853499c <+0x96>
08534995 +0x8f:  mov    $0x1,%eax
0853499a +0x94:  jmp    085349a1 <+0x9b>
0853499c +0x96:  mov    $0x0,%eax
085349a1 +0x9b:  leave
085349a2 +0x9c:  ret
085349a3 +0x9d:  nop
```

## 反编译 C

```c
// WongWork::CItemGenRateTable::_itemTypeVerify @ 0x8534906

/* WongWork::CItemGenRateTable::_itemTypeVerify(int, CItem const*) */

undefined4 __thiscall
WongWork::CItemGenRateTable::_itemTypeVerify(CItemGenRateTable *this,int param_1,CItem *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if ((cVar2 == '\0') || (param_1 != 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 2) {
      return 1;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    if ((iVar3 == 3) && (param_1 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 1) {
      return 1;
    }
  }
  return 0;
}
```
