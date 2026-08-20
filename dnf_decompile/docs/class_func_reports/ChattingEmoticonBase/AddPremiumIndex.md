# AddPremiumIndex

`_ZN20ChattingEmoticonBase15AddPremiumIndexEi`

`ChattingEmoticonBase::AddPremiumIndex(int)`

| 类 | 地址 |
|---|---|
| `ChattingEmoticonBase` | `0x080e5dde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5dde  _ZN20ChattingEmoticonBase15AddPremiumIndexEi
#           ChattingEmoticonBase::AddPremiumIndex(int)
# range [0x080e5dde, 0x080e5e4d]
080e5dde +0x00:  push   %ebp
080e5ddf +0x01:  mov    %esp,%ebp
080e5de1 +0x03:  sub    $0x38,%esp
080e5de4 +0x06:  mov    0xc(%ebp),%eax
080e5de7 +0x09:  cmp    $0x2898bf,%eax
080e5dec +0x0e:  jl     080e5e4c <+0x6e>
080e5dee +0x10:  cmp    $0x2898c0,%eax
080e5df3 +0x15:  jle    080e5dfe <+0x20>
080e5df5 +0x17:  cmp    $0x2898c2,%eax
080e5dfa +0x1c:  jg     080e5e4c <+0x6e>
080e5dfc +0x1e:  jmp    080e5e26 <+0x48>
080e5dfe +0x20:  movl   $0x53,-0x18(%ebp)
080e5e05 +0x27:  mov    0x8(%ebp),%eax
080e5e08 +0x2a:  lea    0x8(%eax),%ecx
080e5e0b +0x2d:  lea    -0x20(%ebp),%eax
080e5e0e +0x30:  lea    -0x18(%ebp),%edx
080e5e11 +0x33:  mov    %edx,0x8(%esp)
080e5e15 +0x37:  mov    %ecx,0x4(%esp)
080e5e19 +0x3b:  mov    %eax,(%esp)
080e5e1c +0x3e:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
080e5e21 +0x43:  sub    $0x4,%esp
080e5e24 +0x46:  jmp    080e5e4c <+0x6e>
080e5e26 +0x48:  movl   $0x57,-0xc(%ebp)
080e5e2d +0x4f:  mov    0x8(%ebp),%eax
080e5e30 +0x52:  lea    0x8(%eax),%ecx
080e5e33 +0x55:  lea    -0x14(%ebp),%eax
080e5e36 +0x58:  lea    -0xc(%ebp),%edx
080e5e39 +0x5b:  mov    %edx,0x8(%esp)
080e5e3d +0x5f:  mov    %ecx,0x4(%esp)
080e5e41 +0x63:  mov    %eax,(%esp)
080e5e44 +0x66:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
080e5e49 +0x6b:  sub    $0x4,%esp
080e5e4c +0x6e:  leave
080e5e4d +0x6f:  ret
```

## 反编译 C

```c
// ChattingEmoticonBase::AddPremiumIndex @ 0x80e5dde

/* ChattingEmoticonBase::AddPremiumIndex(int) */

void __thiscall ChattingEmoticonBase::AddPremiumIndex(ChattingEmoticonBase *this,int param_1)

{
  int local_24 [2];
  undefined4 local_1c;
  int local_18 [2];
  undefined4 local_10;
  
  if (0x2898be < param_1) {
    if (param_1 < 0x2898c1) {
      local_1c = 0x53;
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_24);
    }
    else if (param_1 < 0x2898c3) {
      local_10 = 0x57;
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_18);
    }
  }
  return;
}
```
