# GetEmblemReduceRate

`_ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi`

`WongWork::CAvatarItemMgr::GetEmblemReduceRate(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9f9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9f9e  _ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi
#           WongWork::CAvatarItemMgr::GetEmblemReduceRate(int)
# range [0x082f9f9e, 0x082fa007]
082f9f9e +0x00:  push   %ebp
082f9f9f +0x01:  mov    %esp,%ebp
082f9fa1 +0x03:  sub    $0x28,%esp
082f9fa4 +0x06:  mov    0x8(%ebp),%eax
082f9fa7 +0x09:  lea    0x54(%eax),%ecx
082f9faa +0x0c:  lea    -0x10(%ebp),%eax
082f9fad +0x0f:  lea    0xc(%ebp),%edx
082f9fb0 +0x12:  mov    %edx,0x8(%esp)
082f9fb4 +0x16:  mov    %ecx,0x4(%esp)
082f9fb8 +0x1a:  mov    %eax,(%esp)
082f9fbb +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
082f9fc0 +0x22:  sub    $0x4,%esp
082f9fc3 +0x25:  mov    0x8(%ebp),%eax
082f9fc6 +0x28:  lea    0x54(%eax),%edx
082f9fc9 +0x2b:  lea    -0xc(%ebp),%eax
082f9fcc +0x2e:  mov    %edx,0x4(%esp)
082f9fd0 +0x32:  mov    %eax,(%esp)
082f9fd3 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082f9fd8 +0x3a:  sub    $0x4,%esp
082f9fdb +0x3d:  lea    -0xc(%ebp),%eax
082f9fde +0x40:  mov    %eax,0x4(%esp)
082f9fe2 +0x44:  lea    -0x10(%ebp),%eax
082f9fe5 +0x47:  mov    %eax,(%esp)
082f9fe8 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
082f9fed +0x4f:  test   %al,%al
082f9fef +0x51:  je     082fa001 <+0x63>
082f9ff1 +0x53:  lea    -0x10(%ebp),%eax
082f9ff4 +0x56:  mov    %eax,(%esp)
082f9ff7 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082f9ffc +0x5e:  mov    0x4(%eax),%eax
082f9fff +0x61:  jmp    082fa006 <+0x68>
082fa001 +0x63:  mov    $0x0,%eax
082fa006 +0x68:  leave
082fa007 +0x69:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetEmblemReduceRate @ 0x82f9f9e

/* WongWork::CAvatarItemMgr::GetEmblemReduceRate(int) */

undefined4 WongWork::CAvatarItemMgr::GetEmblemReduceRate(int param_1)

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
