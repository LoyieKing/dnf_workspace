# GetRateFromEmblemGrade

`_ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi`

`AvatarRechargeServer::GetRateFromEmblemGrade(int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x0819114c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819114c  _ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi
#           AvatarRechargeServer::GetRateFromEmblemGrade(int)
# range [0x0819114c, 0x081911b5]
0819114c +0x00:  push   %ebp
0819114d +0x01:  mov    %esp,%ebp
0819114f +0x03:  sub    $0x28,%esp
08191152 +0x06:  mov    0x8(%ebp),%eax
08191155 +0x09:  lea    0x38(%eax),%ecx
08191158 +0x0c:  lea    -0x10(%ebp),%eax
0819115b +0x0f:  lea    0xc(%ebp),%edx
0819115e +0x12:  mov    %edx,0x8(%esp)
08191162 +0x16:  mov    %ecx,0x4(%esp)
08191166 +0x1a:  mov    %eax,(%esp)
08191169 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0819116e +0x22:  sub    $0x4,%esp
08191171 +0x25:  mov    0x8(%ebp),%eax
08191174 +0x28:  lea    0x38(%eax),%edx
08191177 +0x2b:  lea    -0xc(%ebp),%eax
0819117a +0x2e:  mov    %edx,0x4(%esp)
0819117e +0x32:  mov    %eax,(%esp)
08191181 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08191186 +0x3a:  sub    $0x4,%esp
08191189 +0x3d:  lea    -0xc(%ebp),%eax
0819118c +0x40:  mov    %eax,0x4(%esp)
08191190 +0x44:  lea    -0x10(%ebp),%eax
08191193 +0x47:  mov    %eax,(%esp)
08191196 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0819119b +0x4f:  test   %al,%al
0819119d +0x51:  je     081911af <+0x63>
0819119f +0x53:  lea    -0x10(%ebp),%eax
081911a2 +0x56:  mov    %eax,(%esp)
081911a5 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
081911aa +0x5e:  mov    0x4(%eax),%eax
081911ad +0x61:  jmp    081911b4 <+0x68>
081911af +0x63:  mov    $0x0,%eax
081911b4 +0x68:  leave
081911b5 +0x69:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::GetRateFromEmblemGrade @ 0x819114c

/* AvatarRechargeServer::GetRateFromEmblemGrade(int) */

undefined4 AvatarRechargeServer::GetRateFromEmblemGrade(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
