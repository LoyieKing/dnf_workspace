# resetIndexInfo

`_ZN10BlueMarble14resetIndexInfoEi`

`BlueMarble::resetIndexInfo(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6da2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6da2  _ZN10BlueMarble14resetIndexInfoEi
#           BlueMarble::resetIndexInfo(int)
# range [0x080d6da2, 0x080d6dc7]
080d6da2 +0x00:  push   %ebp
080d6da3 +0x01:  mov    %esp,%ebp
080d6da5 +0x03:  sub    $0x18,%esp
080d6da8 +0x06:  mov    0xc(%ebp),%eax
080d6dab +0x09:  mov    0x8(%ebp),%edx
080d6dae +0x0c:  add    $0x4,%edx
080d6db1 +0x0f:  mov    %eax,0x4(%esp)
080d6db5 +0x13:  mov    %edx,(%esp)
080d6db8 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d6dbd +0x1b:  mov    %eax,(%esp)
080d6dc0 +0x1e:  call   080d6b64 <_ZN18BlueMarbleUserInfo10resetIndexEv>  ; BlueMarbleUserInfo::resetIndex()
080d6dc5 +0x23:  leave
080d6dc6 +0x24:  ret
080d6dc7 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::resetIndexInfo @ 0x80d6da2

/* BlueMarble::resetIndexInfo(int) */

void __thiscall BlueMarble::resetIndexInfo(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::resetIndex(this_00);
  return;
}
```
