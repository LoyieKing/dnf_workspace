# clear

`_ZN20BlueMarbleInfoScript5clearEv`

`BlueMarbleInfoScript::clear()`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d57c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d57c0  _ZN20BlueMarbleInfoScript5clearEv
#           BlueMarbleInfoScript::clear()
# range [0x088d57c0, 0x088d589b]
088d57c0 +0x00:  push   %ebp
088d57c1 +0x01:  mov    %esp,%ebp
088d57c3 +0x03:  sub    $0x18,%esp
088d57c6 +0x06:  mov    0x8(%ebp),%eax
088d57c9 +0x09:  movl   $0x0,(%eax)
088d57cf +0x0f:  mov    0x8(%ebp),%eax
088d57d2 +0x12:  movl   $0x0,0x4(%eax)
088d57d9 +0x19:  mov    0x8(%ebp),%eax
088d57dc +0x1c:  movl   $0x0,0x8(%eax)
088d57e3 +0x23:  mov    0x8(%ebp),%eax
088d57e6 +0x26:  movl   $0x0,0xc(%eax)
088d57ed +0x2d:  mov    0x8(%ebp),%eax
088d57f0 +0x30:  movl   $0x0,0x10(%eax)
088d57f7 +0x37:  mov    0x8(%ebp),%eax
088d57fa +0x3a:  movl   $0x0,0x14(%eax)
088d5801 +0x41:  mov    0x8(%ebp),%eax
088d5804 +0x44:  movl   $0x0,0x18(%eax)
088d580b +0x4b:  mov    0x8(%ebp),%eax
088d580e +0x4e:  movl   $0x0,0x1c(%eax)
088d5815 +0x55:  mov    0x8(%ebp),%eax
088d5818 +0x58:  movl   $0x0,0x20(%eax)
088d581f +0x5f:  mov    0x8(%ebp),%eax
088d5822 +0x62:  add    $0x24,%eax
088d5825 +0x65:  mov    %eax,(%esp)
088d5828 +0x68:  call   088d6912 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x194>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x194
088d582d +0x6d:  mov    0x8(%ebp),%eax
088d5830 +0x70:  movl   $0x0,0x30(%eax)
088d5837 +0x77:  mov    0x8(%ebp),%eax
088d583a +0x7a:  movl   $0x0,0x34(%eax)
088d5841 +0x81:  mov    0x8(%ebp),%eax
088d5844 +0x84:  mov    $0x0,%edx
088d5849 +0x89:  mov    %edx,0x38(%eax)
088d584c +0x8c:  mov    0x8(%ebp),%eax
088d584f +0x8f:  mov    $0x0,%edx
088d5854 +0x94:  mov    %edx,0x3c(%eax)
088d5857 +0x97:  mov    0x8(%ebp),%eax
088d585a +0x9a:  add    $0x44,%eax
088d585d +0x9d:  mov    %eax,(%esp)
088d5860 +0xa0:  call   088d692e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1b0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1b0
088d5865 +0xa5:  mov    0x8(%ebp),%eax
088d5868 +0xa8:  add    $0x50,%eax
088d586b +0xab:  mov    %eax,(%esp)
088d586e +0xae:  call   088d692e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1b0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1b0
088d5873 +0xb3:  mov    0x8(%ebp),%eax
088d5876 +0xb6:  add    $0x68,%eax
088d5879 +0xb9:  mov    %eax,(%esp)
088d587c +0xbc:  call   088d694a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1cc>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1cc
088d5881 +0xc1:  mov    0x8(%ebp),%eax
088d5884 +0xc4:  sub    $0xffffff80,%eax
088d5887 +0xc7:  mov    %eax,(%esp)
088d588a +0xca:  call   088d6966 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1e8>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1e8
088d588f +0xcf:  mov    0x8(%ebp),%eax
088d5892 +0xd2:  movl   $0x3e8,0x40(%eax)
088d5899 +0xd9:  leave
088d589a +0xda:  ret
088d589b +0xdb:  nop
```

## 反编译 C

```c
// BlueMarbleInfoScript::clear @ 0x88d57c0

/* BlueMarbleInfoScript::clear() */

void __thiscall BlueMarbleInfoScript::clear(BlueMarbleInfoScript *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::clear
            ((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
             (this + 0x24));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x44));
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x50));
  std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::clear
            ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
             (this + 0x68));
  std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::clear
            ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>> *)(this + 0x80));
  *(undefined4 *)(this + 0x40) = 1000;
  return;
}
```
