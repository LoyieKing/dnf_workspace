# getChannelInfo

`_ZNK16channel_script_t14getChannelInfoEhj`

`channel_script_t::getChannelInfo(unsigned char, unsigned int) const`

| 类 | 地址 |
|---|---|
| `channel_script_t` | `0x088dcd38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088dcd38  _ZNK16channel_script_t14getChannelInfoEhj
#           channel_script_t::getChannelInfo(unsigned char, unsigned int) const
# range [0x088dcd38, 0x088dce3b]
088dcd38 +0x000:  push   %ebp
088dcd39 +0x001:  mov    %esp,%ebp
088dcd3b +0x003:  sub    $0x48,%esp
088dcd3e +0x006:  mov    0xc(%ebp),%eax
088dcd41 +0x009:  mov    %al,-0x2c(%ebp)
088dcd44 +0x00c:  lea    -0x1c(%ebp),%eax
088dcd47 +0x00f:  mov    %eax,(%esp)
088dcd4a +0x012:  call   088ddbee <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9b5>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9b5
088dcd4f +0x017:  lea    -0x20(%ebp),%eax
088dcd52 +0x01a:  mov    %eax,(%esp)
088dcd55 +0x01d:  call   088ddbfc <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9c3>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9c3
088dcd5a +0x022:  movzbl -0x2c(%ebp),%eax
088dcd5e +0x026:  mov    %eax,-0x18(%ebp)
088dcd61 +0x029:  mov    0x8(%ebp),%eax
088dcd64 +0x02c:  lea    0x18(%eax),%ecx
088dcd67 +0x02f:  lea    -0x30(%ebp),%eax
088dcd6a +0x032:  lea    -0x18(%ebp),%edx
088dcd6d +0x035:  mov    %edx,0x8(%esp)
088dcd71 +0x039:  mov    %ecx,0x4(%esp)
088dcd75 +0x03d:  mov    %eax,(%esp)
088dcd78 +0x040:  call   088ddaee <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x8b5>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x8b5
088dcd7d +0x045:  sub    $0x4,%esp
088dcd80 +0x048:  mov    -0x30(%ebp),%eax
088dcd83 +0x04b:  mov    %eax,-0x20(%ebp)
088dcd86 +0x04e:  mov    0x8(%ebp),%eax
088dcd89 +0x051:  lea    0x18(%eax),%edx
088dcd8c +0x054:  lea    -0x14(%ebp),%eax
088dcd8f +0x057:  mov    %edx,0x4(%esp)
088dcd93 +0x05b:  mov    %eax,(%esp)
088dcd96 +0x05e:  call   088ddb1a <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x8e1>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x8e1
088dcd9b +0x063:  sub    $0x4,%esp
088dcd9e +0x066:  lea    -0x14(%ebp),%eax
088dcda1 +0x069:  mov    %eax,0x4(%esp)
088dcda5 +0x06d:  lea    -0x20(%ebp),%eax
088dcda8 +0x070:  mov    %eax,(%esp)
088dcdab +0x073:  call   088ddb40 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x907>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x907
088dcdb0 +0x078:  test   %al,%al
088dcdb2 +0x07a:  je     088dcdbb <+0x83>
088dcdb4 +0x07c:  mov    $0x0,%eax
088dcdb9 +0x081:  jmp    088dce39 <+0x101>
088dcdbb +0x083:  mov    0x10(%ebp),%eax
088dcdbe +0x086:  mov    %eax,-0x10(%ebp)
088dcdc1 +0x089:  lea    -0x20(%ebp),%eax
088dcdc4 +0x08c:  mov    %eax,(%esp)
088dcdc7 +0x08f:  call   088ddb54 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x91b>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x91b
088dcdcc +0x094:  lea    0x4(%eax),%ecx
088dcdcf +0x097:  lea    -0x30(%ebp),%eax
088dcdd2 +0x09a:  lea    -0x10(%ebp),%edx
088dcdd5 +0x09d:  mov    %edx,0x8(%esp)
088dcdd9 +0x0a1:  mov    %ecx,0x4(%esp)
088dcddd +0x0a5:  mov    %eax,(%esp)
088dcde0 +0x0a8:  call   088ddc0a <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9d1>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9d1
088dcde5 +0x0ad:  sub    $0x4,%esp
088dcde8 +0x0b0:  mov    -0x30(%ebp),%eax
088dcdeb +0x0b3:  mov    %eax,-0x1c(%ebp)
088dcdee +0x0b6:  lea    -0x20(%ebp),%eax
088dcdf1 +0x0b9:  mov    %eax,(%esp)
088dcdf4 +0x0bc:  call   088ddb54 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x91b>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x91b
088dcdf9 +0x0c1:  lea    0x4(%eax),%edx
088dcdfc +0x0c4:  lea    -0xc(%ebp),%eax
088dcdff +0x0c7:  mov    %edx,0x4(%esp)
088dce03 +0x0cb:  mov    %eax,(%esp)
088dce06 +0x0ce:  call   088ddb88 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x94f>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x94f
088dce0b +0x0d3:  sub    $0x4,%esp
088dce0e +0x0d6:  lea    -0xc(%ebp),%eax
088dce11 +0x0d9:  mov    %eax,0x4(%esp)
088dce15 +0x0dd:  lea    -0x1c(%ebp),%eax
088dce18 +0x0e0:  mov    %eax,(%esp)
088dce1b +0x0e3:  call   088ddc36 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9fd>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9fd
088dce20 +0x0e8:  test   %al,%al
088dce22 +0x0ea:  je     088dce2b <+0xf3>
088dce24 +0x0ec:  mov    $0x0,%eax
088dce29 +0x0f1:  jmp    088dce39 <+0x101>
088dce2b +0x0f3:  lea    -0x1c(%ebp),%eax
088dce2e +0x0f6:  mov    %eax,(%esp)
088dce31 +0x0f9:  call   088ddbe0 <_GLOBAL__I__Z19importChannelScriptP16channel_script_t+0x9a7>  ; global constructors keyed to importChannelScript(channel_script_t*)+0x9a7
088dce36 +0x0fe:  add    $0x4,%eax
088dce39 +0x101:  leave
088dce3a +0x102:  ret
088dce3b +0x103:  nop
```

## 反编译 C

```c
// channel_script_t::getChannelInfo @ 0x88dcd38

/* channel_script_t::getChannelInfo(unsigned char, unsigned int) const */

int __thiscall channel_script_t::getChannelInfo(channel_script_t *this,uchar param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int local_34;
  byte local_30;
  int local_24;
  int local_20;
  uint local_1c;
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  local_18 [4];
  uint local_14;
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_10 [12];
  
  local_30 = param_1;
  std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20);
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
              *)&local_24);
  local_1c = (uint)local_30;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::find(&local_34);
  local_24 = local_34;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                        *)&local_24,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    local_14 = param_2;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                  *)&local_24);
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::find(&local_34);
    local_20 = local_34;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                  *)&local_24);
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator==
                      ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20);
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
```
