# find

`_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE`

`UsedFatigueRewardItem::find(int, int, UsedFatigueRewardItem::Data&)`

| 类 | 地址 |
|---|---|
| `UsedFatigueRewardItem` | `0x081a28e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a28e4  _ZN21UsedFatigueRewardItem4findEiiRNS_4DataE
#           UsedFatigueRewardItem::find(int, int, UsedFatigueRewardItem::Data&)
# range [0x081a28e4, 0x081a2a67]
081a28e4 +0x000:  push   %ebp
081a28e5 +0x001:  mov    %esp,%ebp
081a28e7 +0x003:  sub    $0x28,%esp
081a28ea +0x006:  mov    0x8(%ebp),%eax
081a28ed +0x009:  lea    0x8(%eax),%edx
081a28f0 +0x00c:  lea    -0xc(%ebp),%eax
081a28f3 +0x00f:  mov    %edx,0x4(%esp)
081a28f7 +0x013:  mov    %eax,(%esp)
081a28fa +0x016:  call   081a45a6 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x601>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x601
081a28ff +0x01b:  sub    $0x4,%esp
081a2902 +0x01e:  mov    0x8(%ebp),%eax
081a2905 +0x021:  lea    0x8(%eax),%edx
081a2908 +0x024:  lea    -0x10(%ebp),%eax
081a290b +0x027:  mov    %edx,0x4(%esp)
081a290f +0x02b:  mov    %eax,(%esp)
081a2912 +0x02e:  call   081a45cc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x627>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x627
081a2917 +0x033:  sub    $0x4,%esp
081a291a +0x036:  jmp    081a2a46 <+0x162>
081a291f +0x03b:  lea    -0x10(%ebp),%eax
081a2922 +0x03e:  mov    %eax,(%esp)
081a2925 +0x041:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a292a +0x046:  movzwl (%eax),%eax
081a292d +0x049:  cwtl
081a292e +0x04a:  cmp    0xc(%ebp),%eax
081a2931 +0x04d:  jl     081a294e <+0x6a>
081a2933 +0x04f:  lea    -0x10(%ebp),%eax
081a2936 +0x052:  mov    %eax,(%esp)
081a2939 +0x055:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a293e +0x05a:  movzwl (%eax),%eax
081a2941 +0x05d:  cwtl
081a2942 +0x05e:  cmp    0x10(%ebp),%eax
081a2945 +0x061:  jge    081a294e <+0x6a>
081a2947 +0x063:  mov    $0x1,%eax
081a294c +0x068:  jmp    081a2953 <+0x6f>
081a294e +0x06a:  mov    $0x0,%eax
081a2953 +0x06f:  test   %al,%al
081a2955 +0x071:  je     081a2a3b <+0x157>
081a295b +0x077:  lea    -0x10(%ebp),%eax
081a295e +0x07a:  mov    %eax,(%esp)
081a2961 +0x07d:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a2966 +0x082:  movzwl (%eax),%edx
081a2969 +0x085:  mov    0x14(%ebp),%eax
081a296c +0x088:  mov    %dx,(%eax)
081a296f +0x08b:  lea    -0x10(%ebp),%eax
081a2972 +0x08e:  mov    %eax,(%esp)
081a2975 +0x091:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a297a +0x096:  mov    0x114(%eax),%edx
081a2980 +0x09c:  mov    0x14(%ebp),%eax
081a2983 +0x09f:  mov    %edx,0x114(%eax)
081a2989 +0x0a5:  lea    -0x10(%ebp),%eax
081a298c +0x0a8:  mov    %eax,(%esp)
081a298f +0x0ab:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a2994 +0x0b0:  movzwl 0x2(%eax),%edx
081a2998 +0x0b4:  mov    0x14(%ebp),%eax
081a299b +0x0b7:  mov    %dx,0x2(%eax)
081a299f +0x0bb:  lea    -0x10(%ebp),%eax
081a29a2 +0x0be:  mov    %eax,(%esp)
081a29a5 +0x0c1:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a29aa +0x0c6:  add    $0x103,%eax
081a29af +0x0cb:  movl   $0x0,0xc(%esp)
081a29b7 +0x0d3:  mov    %eax,0x8(%esp)
081a29bb +0x0d7:  movl   $0x4,0x4(%esp)
081a29c3 +0x0df:  movl   $&g_scriptStringManager_,(%esp)
081a29ca +0x0e6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081a29cf +0x0eb:  mov    0x14(%ebp),%edx
081a29d2 +0x0ee:  add    $0x103,%edx
081a29d8 +0x0f4:  movl   $0x14,0x8(%esp)
081a29e0 +0x0fc:  mov    %eax,0x4(%esp)
081a29e4 +0x100:  mov    %edx,(%esp)
081a29e7 +0x103:  call   0807d8d0 <_init+0x1c8>
081a29ec +0x108:  lea    -0x10(%ebp),%eax
081a29ef +0x10b:  mov    %eax,(%esp)
081a29f2 +0x10e:  call   081a4634 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x68f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x68f
081a29f7 +0x113:  add    $0x4,%eax
081a29fa +0x116:  movl   $0x0,0xc(%esp)
081a2a02 +0x11e:  mov    %eax,0x8(%esp)
081a2a06 +0x122:  movl   $0x4,0x4(%esp)
081a2a0e +0x12a:  movl   $&g_scriptStringManager_,(%esp)
081a2a15 +0x131:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081a2a1a +0x136:  mov    0x14(%ebp),%edx
081a2a1d +0x139:  add    $0x4,%edx
081a2a20 +0x13c:  movl   $0xff,0x8(%esp)
081a2a28 +0x144:  mov    %eax,0x4(%esp)
081a2a2c +0x148:  mov    %edx,(%esp)
081a2a2f +0x14b:  call   0807d8d0 <_init+0x1c8>
081a2a34 +0x150:  mov    $0x1,%eax
081a2a39 +0x155:  jmp    081a2a65 <+0x181>
081a2a3b +0x157:  lea    -0x10(%ebp),%eax
081a2a3e +0x15a:  mov    %eax,(%esp)
081a2a41 +0x15d:  call   081a461c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x677>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x677
081a2a46 +0x162:  lea    -0xc(%ebp),%eax
081a2a49 +0x165:  mov    %eax,0x4(%esp)
081a2a4d +0x169:  lea    -0x10(%ebp),%eax
081a2a50 +0x16c:  mov    %eax,(%esp)
081a2a53 +0x16f:  call   081a45ef <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x64a>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x64a
081a2a58 +0x174:  test   %al,%al
081a2a5a +0x176:  jne    081a291f <+0x3b>
081a2a60 +0x17c:  mov    $0x0,%eax
081a2a65 +0x181:  leave
081a2a66 +0x182:  ret
081a2a67 +0x183:  nop
```

## 反编译 C

```c
// UsedFatigueRewardItem::find @ 0x81a28e4

/* UsedFatigueRewardItem::find(int, int, UsedFatigueRewardItem::Data&) */

undefined4 __thiscall
UsedFatigueRewardItem::find(UsedFatigueRewardItem *this,int param_1,int param_2,Data *param_3)

{
  bool bVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  char *pcVar5;
  __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::end();
  std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0;
    }
    psVar2 = (short *)__gnu_cxx::
                      __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
                      ::operator->(local_14);
    if ((*psVar2 < param_1) ||
       (psVar2 = (short *)__gnu_cxx::
                          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
                          ::operator->(local_14), param_2 <= *psVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
    ::operator++(local_14);
  }
  puVar3 = (undefined2 *)
           __gnu_cxx::
           __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
           ::operator->(local_14);
  *(undefined2 *)param_3 = *puVar3;
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(iVar4 + 0x114);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(iVar4 + 2);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  pcVar5 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              (char *)(iVar4 + 0x103),(bool *)0x0);
  strncpy((char *)(param_3 + 0x103),pcVar5,0x14);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  pcVar5 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              (char *)(iVar4 + 4),(bool *)0x0);
  strncpy((char *)(param_3 + 4),pcVar5,0xff);
  return 1;
}
```
