# GetPvPChannelNumber

`_ZNK16channel_script_t19GetPvPChannelNumberEhj`

`channel_script_t::GetPvPChannelNumber(unsigned char, unsigned int) const`

| 类 | 地址 |
|---|---|
| `channel_script_t` | `0x088dcc28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088dcc28  _ZNK16channel_script_t19GetPvPChannelNumberEhj
#           channel_script_t::GetPvPChannelNumber(unsigned char, unsigned int) const
# range [0x088dcc28, 0x088dcd37]
088dcc28 +0x000:  push   %ebp
088dcc29 +0x001:  mov    %esp,%ebp
088dcc2b +0x003:  sub    $0x48,%esp
088dcc2e +0x006:  mov    0xc(%ebp),%eax
088dcc31 +0x009:  mov    %al,-0x2c(%ebp)
088dcc34 +0x00c:  movzbl -0x2c(%ebp),%eax
088dcc38 +0x010:  mov    %eax,-0x1c(%ebp)
088dcc3b +0x013:  mov    0x8(%ebp),%eax
088dcc3e +0x016:  lea    0x18(%eax),%ecx
088dcc41 +0x019:  lea    -0x20(%ebp),%eax
088dcc44 +0x01c:  lea    -0x1c(%ebp),%edx
088dcc47 +0x01f:  mov    %edx,0x8(%esp)
088dcc4b +0x023:  mov    %ecx,0x4(%esp)
088dcc4f +0x027:  mov    %eax,(%esp)
088dcc52 +0x02a:  call   088ddaee <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x8b5>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x8b5
088dcc57 +0x02f:  sub    $0x4,%esp
088dcc5a +0x032:  mov    0x8(%ebp),%eax
088dcc5d +0x035:  lea    0x18(%eax),%edx
088dcc60 +0x038:  lea    -0x18(%ebp),%eax
088dcc63 +0x03b:  mov    %edx,0x4(%esp)
088dcc67 +0x03f:  mov    %eax,(%esp)
088dcc6a +0x042:  call   088ddb1a <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x8e1>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x8e1
088dcc6f +0x047:  sub    $0x4,%esp
088dcc72 +0x04a:  lea    -0x18(%ebp),%eax
088dcc75 +0x04d:  mov    %eax,0x4(%esp)
088dcc79 +0x051:  lea    -0x20(%ebp),%eax
088dcc7c +0x054:  mov    %eax,(%esp)
088dcc7f +0x057:  call   088ddb40 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x907>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x907
088dcc84 +0x05c:  test   %al,%al
088dcc86 +0x05e:  je     088dcc92 <+0x6a>
088dcc88 +0x060:  mov    $0xffffffff,%eax
088dcc8d +0x065:  jmp    088dcd36 <+0x10e>
088dcc92 +0x06a:  lea    -0x20(%ebp),%eax
088dcc95 +0x06d:  mov    %eax,(%esp)
088dcc98 +0x070:  call   088ddb54 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x91b>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x91b
088dcc9d +0x075:  add    $0x4,%eax
088dcca0 +0x078:  mov    %eax,-0x10(%ebp)
088dcca3 +0x07b:  movl   $0xffffffff,-0xc(%ebp)
088dccaa +0x082:  lea    -0x24(%ebp),%eax
088dccad +0x085:  mov    -0x10(%ebp),%edx
088dccb0 +0x088:  mov    %edx,0x4(%esp)
088dccb4 +0x08c:  mov    %eax,(%esp)
088dccb7 +0x08f:  call   088ddb62 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x929>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x929
088dccbc +0x094:  sub    $0x4,%esp
088dccbf +0x097:  jmp    088dcd06 <+0xde>
088dccc1 +0x099:  lea    -0x24(%ebp),%eax
088dccc4 +0x09c:  mov    %eax,(%esp)
088dccc7 +0x09f:  call   088ddbe0 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9a7>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9a7
088dcccc +0x0a4:  mov    0x8(%eax),%eax
088dcccf +0x0a7:  mov    %eax,(%esp)
088dccd2 +0x0aa:  call   088dd255 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x1c>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x1c
088dccd7 +0x0af:  test   %al,%al
088dccd9 +0x0b1:  je     088dccdf <+0xb7>
088dccdb +0x0b3:  addl   $0x1,-0xc(%ebp)
088dccdf +0x0b7:  lea    -0x24(%ebp),%eax
088dcce2 +0x0ba:  mov    %eax,(%esp)
088dcce5 +0x0bd:  call   088ddbe0 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9a7>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9a7
088dccea +0x0c2:  mov    (%eax),%eax
088dccec +0x0c4:  cmp    0x10(%ebp),%eax
088dccef +0x0c7:  sete   %al
088dccf2 +0x0ca:  test   %al,%al
088dccf4 +0x0cc:  je     088dccfb <+0xd3>
088dccf6 +0x0ce:  mov    -0xc(%ebp),%eax
088dccf9 +0x0d1:  jmp    088dcd36 <+0x10e>
088dccfb +0x0d3:  lea    -0x24(%ebp),%eax
088dccfe +0x0d6:  mov    %eax,(%esp)
088dcd01 +0x0d9:  call   088ddbc2 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x989>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x989
088dcd06 +0x0de:  lea    -0x14(%ebp),%eax
088dcd09 +0x0e1:  mov    -0x10(%ebp),%edx
088dcd0c +0x0e4:  mov    %edx,0x4(%esp)
088dcd10 +0x0e8:  mov    %eax,(%esp)
088dcd13 +0x0eb:  call   088ddb88 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x94f>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x94f
088dcd18 +0x0f0:  sub    $0x4,%esp
088dcd1b +0x0f3:  lea    -0x14(%ebp),%eax
088dcd1e +0x0f6:  mov    %eax,0x4(%esp)
088dcd22 +0x0fa:  lea    -0x24(%ebp),%eax
088dcd25 +0x0fd:  mov    %eax,(%esp)
088dcd28 +0x100:  call   088ddbae <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x975>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x975
088dcd2d +0x105:  test   %al,%al
088dcd2f +0x107:  jne    088dccc1 <+0x99>
088dcd31 +0x109:  mov    $0xffffffff,%eax
088dcd36 +0x10e:  leave
088dcd37 +0x10f:  ret
```

## 反编译 C

```c
// channel_script_t::GetPvPChannelNumber @ 0x88dcc28

/* channel_script_t::GetPvPChannelNumber(unsigned char, unsigned int) const */

int __thiscall
channel_script_t::GetPvPChannelNumber(channel_script_t *this,uchar param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
  local_24 [4];
  uint local_20;
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  local_1c [4];
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_20 = (uint)param_1;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::find((int *)local_24);
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
          ::operator==(local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    local_14 = std::
               _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
               ::operator->(local_24);
    local_14 = local_14 + 4;
    local_10 = -1;
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>::
      end(local_18);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28,
                         (_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28);
      cVar1 = IS_PVP_CHANNEL(*(int *)(iVar2 + 8));
      if (cVar1 != '\0') {
        local_10 = local_10 + 1;
      }
      puVar3 = (uint *)std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                                 ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)
                                  local_28);
      if (*puVar3 == param_2) {
        return local_10;
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28);
    }
  }
  return -1;
}
```
