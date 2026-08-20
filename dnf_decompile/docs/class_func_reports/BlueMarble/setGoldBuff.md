# setGoldBuff

`_ZN10BlueMarble11setGoldBuffEii`

`BlueMarble::setGoldBuff(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d77f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d77f0  _ZN10BlueMarble11setGoldBuffEii
#           BlueMarble::setGoldBuff(int, int)
# range [0x080d77f0, 0x080d781b]
080d77f0 +0x00:  push   %ebp
080d77f1 +0x01:  mov    %esp,%ebp
080d77f3 +0x03:  sub    $0x18,%esp
080d77f6 +0x06:  mov    0xc(%ebp),%eax
080d77f9 +0x09:  mov    0x8(%ebp),%edx
080d77fc +0x0c:  add    $0x4,%edx
080d77ff +0x0f:  mov    %eax,0x4(%esp)
080d7803 +0x13:  mov    %edx,(%esp)
080d7806 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d780b +0x1b:  mov    0x10(%ebp),%edx
080d780e +0x1e:  mov    %edx,0x4(%esp)
080d7812 +0x22:  mov    %eax,(%esp)
080d7815 +0x25:  call   080d6cac <_ZN18BlueMarbleUserInfo7setGoldEi>  ; BlueMarbleUserInfo::setGold(int)
080d781a +0x2a:  leave
080d781b +0x2b:  ret
```

## 反编译 C

```c
// BlueMarble::setGoldBuff @ 0x80d77f0

/* BlueMarble::setGoldBuff(int, int) */

void __thiscall BlueMarble::setGoldBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setGold(this_00,param_2);
  return;
}
```
