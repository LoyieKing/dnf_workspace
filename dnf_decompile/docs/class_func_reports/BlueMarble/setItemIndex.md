# setItemIndex

`_ZN10BlueMarble12setItemIndexEii`

`BlueMarble::setItemIndex(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7746  _ZN10BlueMarble12setItemIndexEii
#           BlueMarble::setItemIndex(int, int)
# range [0x080d7746, 0x080d7777]
080d7746 +0x00:  push   %ebp
080d7747 +0x01:  mov    %esp,%ebp
080d7749 +0x03:  push   %ebx
080d774a +0x04:  sub    $0x14,%esp
080d774d +0x07:  mov    0x10(%ebp),%ebx
080d7750 +0x0a:  mov    0xc(%ebp),%eax
080d7753 +0x0d:  mov    0x8(%ebp),%edx
080d7756 +0x10:  add    $0x4,%edx
080d7759 +0x13:  mov    %eax,0x4(%esp)
080d775d +0x17:  mov    %edx,(%esp)
080d7760 +0x1a:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7765 +0x1f:  mov    %ebx,0x4(%esp)
080d7769 +0x23:  mov    %eax,(%esp)
080d776c +0x26:  call   080d6c44 <_ZN18BlueMarbleUserInfo7setItemEj>  ; BlueMarbleUserInfo::setItem(unsigned int)
080d7771 +0x2b:  add    $0x14,%esp
080d7774 +0x2e:  pop    %ebx
080d7775 +0x2f:  pop    %ebp
080d7776 +0x30:  ret
080d7777 +0x31:  nop
```

## 反编译 C

```c
// BlueMarble::setItemIndex @ 0x80d7746

/* BlueMarble::setItemIndex(int, int) */

void __thiscall BlueMarble::setItemIndex(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setItem(this_00,param_2);
  return;
}
```
