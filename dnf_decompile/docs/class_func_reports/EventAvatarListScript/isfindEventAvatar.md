# isfindEventAvatar

`_ZN21EventAvatarListScript17isfindEventAvatarEi`

`EventAvatarListScript::isfindEventAvatar(int)`

| 类 | 地址 |
|---|---|
| `EventAvatarListScript` | `0x0895e17c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0895e17c  _ZN21EventAvatarListScript17isfindEventAvatarEi
#           EventAvatarListScript::isfindEventAvatar(int)
# range [0x0895e17c, 0x0895e1ec]
0895e17c +0x00:  push   %ebp
0895e17d +0x01:  mov    %esp,%ebp
0895e17f +0x03:  sub    $0x28,%esp
0895e182 +0x06:  mov    0x8(%ebp),%eax
0895e185 +0x09:  mov    %eax,(%esp)
0895e188 +0x0c:  call   08236fa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc64c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc64c
0895e18d +0x11:  test   %al,%al
0895e18f +0x13:  je     0895e198 <+0x1c>
0895e191 +0x15:  mov    $0x0,%eax
0895e196 +0x1a:  jmp    0895e1eb <+0x6f>
0895e198 +0x1c:  mov    0x8(%ebp),%edx
0895e19b +0x1f:  lea    -0x10(%ebp),%eax
0895e19e +0x22:  lea    0xc(%ebp),%ecx
0895e1a1 +0x25:  mov    %ecx,0x8(%esp)
0895e1a5 +0x29:  mov    %edx,0x4(%esp)
0895e1a9 +0x2d:  mov    %eax,(%esp)
0895e1ac +0x30:  call   080da574 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x711>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x711
0895e1b1 +0x35:  sub    $0x4,%esp
0895e1b4 +0x38:  mov    0x8(%ebp),%edx
0895e1b7 +0x3b:  lea    -0xc(%ebp),%eax
0895e1ba +0x3e:  mov    %edx,0x4(%esp)
0895e1be +0x42:  mov    %eax,(%esp)
0895e1c1 +0x45:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
0895e1c6 +0x4a:  sub    $0x4,%esp
0895e1c9 +0x4d:  lea    -0xc(%ebp),%eax
0895e1cc +0x50:  mov    %eax,0x4(%esp)
0895e1d0 +0x54:  lea    -0x10(%ebp),%eax
0895e1d3 +0x57:  mov    %eax,(%esp)
0895e1d6 +0x5a:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
0895e1db +0x5f:  test   %al,%al
0895e1dd +0x61:  je     0895e1e6 <+0x6a>
0895e1df +0x63:  mov    $0x1,%eax
0895e1e4 +0x68:  jmp    0895e1eb <+0x6f>
0895e1e6 +0x6a:  mov    $0x0,%eax
0895e1eb +0x6f:  leave
0895e1ec +0x70:  ret
```

## 反编译 C

```c
// EventAvatarListScript::isfindEventAvatar @ 0x895e17c

/* EventAvatarListScript::isfindEventAvatar(int) */

undefined4 EventAvatarListScript::isfindEventAvatar(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_const_iterator<int> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                    ((set<int,std::less<int>,std::allocator<int>> *)param_1);
  if (cVar1 == '\0') {
    std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
    std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
