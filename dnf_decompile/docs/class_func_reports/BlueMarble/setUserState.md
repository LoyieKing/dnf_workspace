# setUserState

`_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE`

`BlueMarble::setUserState(int, BlueMarbleUserState::T)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d793a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d793a  _ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE
#           BlueMarble::setUserState(int, BlueMarbleUserState::T)
# range [0x080d793a, 0x080d7965]
080d793a +0x00:  push   %ebp
080d793b +0x01:  mov    %esp,%ebp
080d793d +0x03:  sub    $0x18,%esp
080d7940 +0x06:  mov    0xc(%ebp),%eax
080d7943 +0x09:  mov    0x8(%ebp),%edx
080d7946 +0x0c:  add    $0x4,%edx
080d7949 +0x0f:  mov    %eax,0x4(%esp)
080d794d +0x13:  mov    %edx,(%esp)
080d7950 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7955 +0x1b:  mov    0x10(%ebp),%edx
080d7958 +0x1e:  mov    %edx,0x4(%esp)
080d795c +0x22:  mov    %eax,(%esp)
080d795f +0x25:  call   080d6ba0 <_ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE>  ; BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T)
080d7964 +0x2a:  leave
080d7965 +0x2b:  ret
```

## 反编译 C

```c
// BlueMarble::setUserState @ 0x80d793a

/* BlueMarble::setUserState(int, BlueMarbleUserState::T) */

void __thiscall BlueMarble::setUserState(BlueMarble *this,uint param_1,undefined4 param_3)

{
  BlueMarbleUserInfo *pBVar1;
  
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  BlueMarbleUserInfo::setUserState(pBVar1,param_3);
  return;
}
```
