# parse

`_ZN11game_master14CRecipeSuccess5parseEv`

`game_master::CRecipeSuccess::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CRecipeSuccess` | `0x084b399a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b399a  _ZN11game_master14CRecipeSuccess5parseEv
#           game_master::CRecipeSuccess::parse()
# range [0x084b399a, 0x084b3a33]
084b399a +0x00:  push   %ebp
084b399b +0x01:  mov    %esp,%ebp
084b399d +0x03:  sub    $0x18,%esp
084b39a0 +0x06:  mov    0x8(%ebp),%eax
084b39a3 +0x09:  mov    0x4(%eax),%eax
084b39a6 +0x0c:  test   %eax,%eax
084b39a8 +0x0e:  je     084b3a30 <+0x96>
084b39ae +0x14:  mov    0x8(%ebp),%eax
084b39b1 +0x17:  mov    0x4(%eax),%eax
084b39b4 +0x1a:  add    $0x11c,%eax
084b39b9 +0x1f:  movl   $0x1,0x4(%esp)
084b39c1 +0x27:  mov    %eax,(%esp)
084b39c4 +0x2a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b39c9 +0x2f:  movl   $"success",0x4(%esp)
084b39d1 +0x37:  mov    %eax,(%esp)
084b39d4 +0x3a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b39d9 +0x3f:  test   %al,%al
084b39db +0x41:  je     084b39e9 <+0x4f>
084b39dd +0x43:  mov    0x8(%ebp),%eax
084b39e0 +0x46:  movl   $0x1,0x8(%eax)
084b39e7 +0x4d:  jmp    084b3a31 <+0x97>
084b39e9 +0x4f:  mov    0x8(%ebp),%eax
084b39ec +0x52:  mov    0x4(%eax),%eax
084b39ef +0x55:  add    $0x11c,%eax
084b39f4 +0x5a:  movl   $0x1,0x4(%esp)
084b39fc +0x62:  mov    %eax,(%esp)
084b39ff +0x65:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3a04 +0x6a:  movl   $"fail",0x4(%esp)
084b3a0c +0x72:  mov    %eax,(%esp)
084b3a0f +0x75:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3a14 +0x7a:  test   %al,%al
084b3a16 +0x7c:  je     084b3a24 <+0x8a>
084b3a18 +0x7e:  mov    0x8(%ebp),%eax
084b3a1b +0x81:  movl   $0x2,0x8(%eax)
084b3a22 +0x88:  jmp    084b3a31 <+0x97>
084b3a24 +0x8a:  mov    0x8(%ebp),%eax
084b3a27 +0x8d:  movl   $0x0,0x8(%eax)
084b3a2e +0x94:  jmp    084b3a31 <+0x97>
084b3a30 +0x96:  nop
084b3a31 +0x97:  leave
084b3a32 +0x98:  ret
084b3a33 +0x99:  nop
```

## 反编译 C

```c
// game_master::CRecipeSuccess::parse @ 0x84b399a

/* game_master::CRecipeSuccess::parse() */

void __thiscall game_master::CRecipeSuccess::parse(CRecipeSuccess *this)

{
  bool bVar1;
  string *psVar2;
  
  if (*(int *)(this + 4) != 0) {
    psVar2 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    bVar1 = std::operator==(psVar2,"success");
    if (bVar1) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)
                          (*(int *)(this + 4) + 0x11c),1);
      bVar1 = std::operator==(psVar2,"fail");
      if (bVar1) {
        *(undefined4 *)(this + 8) = 2;
      }
      else {
        *(undefined4 *)(this + 8) = 0;
      }
    }
  }
  return;
}
```
