# destroy

`_ZN14CExpertJobList7destroyEv`

`CExpertJobList::destroy()`

| 类 | 地址 |
|---|---|
| `CExpertJobList` | `0x0896dac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0896dac6  _ZN14CExpertJobList7destroyEv
#           CExpertJobList::destroy()
# range [0x0896dac6, 0x0896db46]
0896dac6 +0x00:  push   %ebp
0896dac7 +0x01:  mov    %esp,%ebp
0896dac9 +0x03:  push   %ebx
0896daca +0x04:  sub    $0x24,%esp
0896dacd +0x07:  mov    0x8(%ebp),%edx
0896dad0 +0x0a:  lea    -0x10(%ebp),%eax
0896dad3 +0x0d:  mov    %edx,0x4(%esp)
0896dad7 +0x11:  mov    %eax,(%esp)
0896dada +0x14:  call   0896fe5a <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x22aa>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x22aa
0896dadf +0x19:  sub    $0x4,%esp
0896dae2 +0x1c:  mov    0x8(%ebp),%edx
0896dae5 +0x1f:  lea    -0x14(%ebp),%eax
0896dae8 +0x22:  mov    %edx,0x4(%esp)
0896daec +0x26:  mov    %eax,(%esp)
0896daef +0x29:  call   08235ada <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb184>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb184
0896daf4 +0x2e:  sub    $0x4,%esp
0896daf7 +0x31:  jmp    0896db2c <+0x66>
0896daf9 +0x33:  lea    -0x10(%ebp),%eax
0896dafc +0x36:  mov    %eax,(%esp)
0896daff +0x39:  call   0896fe9e <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x22ee>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x22ee
0896db04 +0x3e:  mov    0x4(%eax),%eax
0896db07 +0x41:  mov    %eax,-0xc(%ebp)
0896db0a +0x44:  mov    -0xc(%ebp),%ebx
0896db0d +0x47:  test   %ebx,%ebx
0896db0f +0x49:  je     0896db21 <+0x5b>
0896db11 +0x4b:  mov    %ebx,(%esp)
0896db14 +0x4e:  call   0896e81c <_GLOBAL__I_g_expertJobScriptBaseDirectory+0xc6c>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0xc6c
0896db19 +0x53:  mov    %ebx,(%esp)
0896db1c +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0896db21 +0x5b:  lea    -0x10(%ebp),%eax
0896db24 +0x5e:  mov    %eax,(%esp)
0896db27 +0x61:  call   0896fe80 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x22d0>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x22d0
0896db2c +0x66:  lea    -0x14(%ebp),%eax
0896db2f +0x69:  mov    %eax,0x4(%esp)
0896db33 +0x6d:  lea    -0x10(%ebp),%eax
0896db36 +0x70:  mov    %eax,(%esp)
0896db39 +0x73:  call   08235b00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb1aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb1aa
0896db3e +0x78:  test   %al,%al
0896db40 +0x7a:  jne    0896daf9 <+0x33>
0896db42 +0x7c:  mov    -0x4(%ebp),%ebx
0896db45 +0x7f:  leave
0896db46 +0x80:  ret
```

## 反编译 C

```c
// CExpertJobList::destroy @ 0x896dac6

/* CExpertJobList::destroy() */

void CExpertJobList::destroy(void)

{
  STExpertJobScript *this;
  char cVar1;
  int iVar2;
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  local_18 [4];
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  local_14 [4];
  STExpertJobScript *local_10;
  
  std::
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  ::begin(local_14);
  std::
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  ::end(local_18);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14);
    this = *(STExpertJobScript **)(iVar2 + 4);
    local_10 = this;
    if (this != (STExpertJobScript *)0x0) {
      STExpertJobScript::~STExpertJobScript(this);
      operator_delete(this);
    }
    std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14);
  }
  return;
}
```
