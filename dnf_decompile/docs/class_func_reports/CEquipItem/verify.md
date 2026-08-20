# verify

`_ZN10CEquipItem6verifyEv`

`CEquipItem::verify()`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x08510818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510818  _ZN10CEquipItem6verifyEv
#           CEquipItem::verify()
# range [0x08510818, 0x085108c5]
08510818 +0x00:  push   %ebp
08510819 +0x01:  mov    %esp,%ebp
0851081b +0x03:  sub    $0x18,%esp
0851081e +0x06:  mov    0x8(%ebp),%eax
08510821 +0x09:  mov    0x6c(%eax),%eax
08510824 +0x0c:  test   %eax,%eax
08510826 +0x0e:  jne    08510836 <+0x1e>
08510828 +0x10:  mov    0x8(%ebp),%eax
0851082b +0x13:  mov    0x70(%eax),%eax
0851082e +0x16:  test   %eax,%eax
08510830 +0x18:  je     085108bf <+0xa7>
08510836 +0x1e:  mov    0x8(%ebp),%eax
08510839 +0x21:  mov    (%eax),%eax
0851083b +0x23:  add    $0xc,%eax
0851083e +0x26:  mov    (%eax),%edx
08510840 +0x28:  mov    0x8(%ebp),%eax
08510843 +0x2b:  mov    %eax,(%esp)
08510846 +0x2e:  call   *%edx
08510848 +0x30:  test   %eax,%eax
0851084a +0x32:  js     08510863 <+0x4b>
0851084c +0x34:  mov    0x8(%ebp),%eax
0851084f +0x37:  mov    (%eax),%eax
08510851 +0x39:  add    $0xc,%eax
08510854 +0x3c:  mov    (%eax),%edx
08510856 +0x3e:  mov    0x8(%ebp),%eax
08510859 +0x41:  mov    %eax,(%esp)
0851085c +0x44:  call   *%edx
0851085e +0x46:  cmp    $0x9,%eax
08510861 +0x49:  jle    085108af <+0x97>
08510863 +0x4b:  mov    0x8(%ebp),%eax
08510866 +0x4e:  mov    (%eax),%eax
08510868 +0x50:  add    $0xc,%eax
0851086b +0x53:  mov    (%eax),%edx
0851086d +0x55:  mov    0x8(%ebp),%eax
08510870 +0x58:  mov    %eax,(%esp)
08510873 +0x5b:  call   *%edx
08510875 +0x5d:  cmp    $0xb,%eax
08510878 +0x60:  je     085108af <+0x97>
0851087a +0x62:  mov    0x8(%ebp),%eax
0851087d +0x65:  mov    (%eax),%eax
0851087f +0x67:  add    $0xc,%eax
08510882 +0x6a:  mov    (%eax),%edx
08510884 +0x6c:  mov    0x8(%ebp),%eax
08510887 +0x6f:  mov    %eax,(%esp)
0851088a +0x72:  call   *%edx
0851088c +0x74:  cmp    $0x16,%eax
0851088f +0x77:  je     085108af <+0x97>
08510891 +0x79:  mov    0x8(%ebp),%eax
08510894 +0x7c:  mov    (%eax),%eax
08510896 +0x7e:  add    $0xc,%eax
08510899 +0x81:  mov    (%eax),%edx
0851089b +0x83:  mov    0x8(%ebp),%eax
0851089e +0x86:  mov    %eax,(%esp)
085108a1 +0x89:  call   *%edx
085108a3 +0x8b:  cmp    $0xa,%eax
085108a6 +0x8e:  je     085108af <+0x97>
085108a8 +0x90:  mov    $0x1,%eax
085108ad +0x95:  jmp    085108b4 <+0x9c>
085108af +0x97:  mov    $0x0,%eax
085108b4 +0x9c:  test   %al,%al
085108b6 +0x9e:  je     085108bf <+0xa7>
085108b8 +0xa0:  mov    $0x0,%eax
085108bd +0xa5:  jmp    085108c4 <+0xac>
085108bf +0xa7:  mov    $0x1,%eax
085108c4 +0xac:  leave
085108c5 +0xad:  ret
```

## 反编译 C

```c
// CEquipItem::verify @ 0x8510818

/* CEquipItem::verify() */

undefined4 __thiscall CEquipItem::verify(CEquipItem *this)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)(this + 0x6c) != 0) || (*(int *)(this + 0x70) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0xc))(this);
    if (((iVar2 < 0) || (iVar2 = (**(code **)(*(int *)this + 0xc))(this), 9 < iVar2)) &&
       (((iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 0xb &&
         (iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 0x16)) &&
        (iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 10)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}
```
