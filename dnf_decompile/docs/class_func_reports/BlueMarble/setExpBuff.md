# setExpBuff

`_ZN10BlueMarble10setExpBuffEii`

`BlueMarble::setExpBuff(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d779e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d779e  _ZN10BlueMarble10setExpBuffEii
#           BlueMarble::setExpBuff(int, int)
# range [0x080d779e, 0x080d77c9]
080d779e +0x00:  push   %ebp
080d779f +0x01:  mov    %esp,%ebp
080d77a1 +0x03:  sub    $0x18,%esp
080d77a4 +0x06:  mov    0xc(%ebp),%eax
080d77a7 +0x09:  mov    0x8(%ebp),%edx
080d77aa +0x0c:  add    $0x4,%edx
080d77ad +0x0f:  mov    %eax,0x4(%esp)
080d77b1 +0x13:  mov    %edx,(%esp)
080d77b4 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d77b9 +0x1b:  mov    0x10(%ebp),%edx
080d77bc +0x1e:  mov    %edx,0x4(%esp)
080d77c0 +0x22:  mov    %eax,(%esp)
080d77c3 +0x25:  call   080d6c5e <_ZN18BlueMarbleUserInfo6setExpEi>  ; BlueMarbleUserInfo::setExp(int)
080d77c8 +0x2a:  leave
080d77c9 +0x2b:  ret
```

## 反编译 C

```c
// BlueMarble::setExpBuff @ 0x80d779e

/* BlueMarble::setExpBuff(int, int) */

void __thiscall BlueMarble::setExpBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setExp(this_00,param_2);
  return;
}
```
