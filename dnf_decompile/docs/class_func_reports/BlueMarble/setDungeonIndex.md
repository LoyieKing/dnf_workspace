# setDungeonIndex

`_ZN10BlueMarble15setDungeonIndexEii`

`BlueMarble::setDungeonIndex(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d738a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d738a  _ZN10BlueMarble15setDungeonIndexEii
#           BlueMarble::setDungeonIndex(int, int)
# range [0x080d738a, 0x080d73b5]
080d738a +0x00:  push   %ebp
080d738b +0x01:  mov    %esp,%ebp
080d738d +0x03:  sub    $0x18,%esp
080d7390 +0x06:  mov    0xc(%ebp),%eax
080d7393 +0x09:  mov    0x8(%ebp),%edx
080d7396 +0x0c:  add    $0x4,%edx
080d7399 +0x0f:  mov    %eax,0x4(%esp)
080d739d +0x13:  mov    %edx,(%esp)
080d73a0 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d73a5 +0x1b:  mov    0x10(%ebp),%edx
080d73a8 +0x1e:  mov    %edx,0x4(%esp)
080d73ac +0x22:  mov    %eax,(%esp)
080d73af +0x25:  call   080d6c2a <_ZN18BlueMarbleUserInfo10setDungeonEi>  ; BlueMarbleUserInfo::setDungeon(int)
080d73b4 +0x2a:  leave
080d73b5 +0x2b:  ret
```

## 反编译 C

```c
// BlueMarble::setDungeonIndex @ 0x80d738a

/* BlueMarble::setDungeonIndex(int, int) */

void __thiscall BlueMarble::setDungeonIndex(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setDungeon(this_00,param_2);
  return;
}
```
