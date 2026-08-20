# resetBuffInfo

`_ZN10BlueMarble13resetBuffInfoEi`

`BlueMarble::resetBuffInfo(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6d7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6d7c  _ZN10BlueMarble13resetBuffInfoEi
#           BlueMarble::resetBuffInfo(int)
# range [0x080d6d7c, 0x080d6da1]
080d6d7c +0x00:  push   %ebp
080d6d7d +0x01:  mov    %esp,%ebp
080d6d7f +0x03:  sub    $0x18,%esp
080d6d82 +0x06:  mov    0xc(%ebp),%eax
080d6d85 +0x09:  mov    0x8(%ebp),%edx
080d6d88 +0x0c:  add    $0x4,%edx
080d6d8b +0x0f:  mov    %eax,0x4(%esp)
080d6d8f +0x13:  mov    %edx,(%esp)
080d6d92 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d6d97 +0x1b:  mov    %eax,(%esp)
080d6d9a +0x1e:  call   080d6b4e <_ZN18BlueMarbleUserInfo9resetBuffEv>  ; BlueMarbleUserInfo::resetBuff()
080d6d9f +0x23:  leave
080d6da0 +0x24:  ret
080d6da1 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::resetBuffInfo @ 0x80d6d7c

/* BlueMarble::resetBuffInfo(int) */

void __thiscall BlueMarble::resetBuffInfo(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::resetBuff(this_00);
  return;
}
```
