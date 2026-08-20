# _getAdditionalDisjointItem

`_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb`

`WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08546a96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08546a96  _ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb
#           WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&, bool)
# range [0x08546a96, 0x08546bb9]
08546a96 +0x000:  push   %ebp
08546a97 +0x001:  mov    %esp,%ebp
08546a99 +0x003:  push   %esi
08546a9a +0x004:  push   %ebx
08546a9b +0x005:  sub    $0x50,%esp
08546a9e +0x008:  mov    0x1c(%ebp),%eax
08546aa1 +0x00b:  mov    %al,-0x3c(%ebp)
08546aa4 +0x00e:  mov    0x18(%ebp),%eax
08546aa7 +0x011:  lea    0x490(%eax),%edx
08546aad +0x017:  mov    0xc(%ebp),%eax
08546ab0 +0x01a:  mov    %eax,0x4(%esp)
08546ab4 +0x01e:  mov    %edx,(%esp)
08546ab7 +0x021:  call   0854b7c2 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x64a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x64a
08546abc +0x026:  mov    (%eax),%edx
08546abe +0x028:  mov    %edx,-0x2e(%ebp)
08546ac1 +0x02b:  movzwl 0x4(%eax),%eax
08546ac5 +0x02f:  mov    %ax,-0x2a(%ebp)
08546ac9 +0x033:  movzwl -0x2e(%ebp),%eax
08546acd +0x037:  cwtl
08546ace +0x038:  cmp    0xc(%ebp),%eax
08546ad1 +0x03b:  jne    08546bab <+0x115>
08546ad7 +0x041:  mov    0x18(%ebp),%eax
08546ada +0x044:  mov    0x48c(%eax),%eax
08546ae0 +0x04a:  mov    %eax,-0x34(%ebp)
08546ae3 +0x04d:  movl   $0x0,-0x38(%ebp)
08546aea +0x054:  cmpb   $0x0,-0x3c(%ebp)
08546aee +0x058:  je     08546afa <+0x64>
08546af0 +0x05a:  movzwl -0x2a(%ebp),%eax
08546af4 +0x05e:  cwtl
08546af5 +0x05f:  mov    %eax,-0x38(%ebp)
08546af8 +0x062:  jmp    08546b02 <+0x6c>
08546afa +0x064:  movzwl -0x2c(%ebp),%eax
08546afe +0x068:  cwtl
08546aff +0x069:  mov    %eax,-0x38(%ebp)
08546b02 +0x06c:  mov    -0x38(%ebp),%eax
08546b05 +0x06f:  test   %eax,%eax
08546b07 +0x071:  je     08546bae <+0x118>
08546b0d +0x077:  lea    -0x20(%ebp),%eax
08546b10 +0x07a:  lea    -0x38(%ebp),%edx
08546b13 +0x07d:  mov    %edx,0x8(%esp)
08546b17 +0x081:  lea    -0x34(%ebp),%edx
08546b1a +0x084:  mov    %edx,0x4(%esp)
08546b1e +0x088:  mov    %eax,(%esp)
08546b21 +0x08b:  call   0854b74f <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x5d7>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x5d7
08546b26 +0x090:  sub    $0x4,%esp
08546b29 +0x093:  lea    -0x20(%ebp),%eax
08546b2c +0x096:  mov    %eax,0x4(%esp)
08546b30 +0x09a:  lea    -0x28(%ebp),%eax
08546b33 +0x09d:  mov    %eax,(%esp)
08546b36 +0x0a0:  call   0854b78e <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x616>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x616
08546b3b +0x0a5:  lea    -0x28(%ebp),%eax
08546b3e +0x0a8:  mov    %eax,0x4(%esp)
08546b42 +0x0ac:  mov    0x14(%ebp),%eax
08546b45 +0x0af:  mov    %eax,(%esp)
08546b48 +0x0b2:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08546b4d +0x0b7:  jmp    08546baf <+0x119>
08546b4f +0x0b9:  mov    %eax,(%esp)
08546b52 +0x0bc:  call   08725ce0 <__cxa_begin_catch>
08546b57 +0x0c1:  movl   $0x5,0xc(%esp)
08546b5f +0x0c9:  movl   $0x121,0x8(%esp)
08546b67 +0x0d1:  movl   $&_ZZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tbE19__PRETTY_FUNCTION__,0x4(%esp)
08546b6f +0x0d9:  lea    -0x18(%ebp),%eax
08546b72 +0x0dc:  mov    %eax,(%esp)
08546b75 +0x0df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08546b7a +0x0e4:  movl   $"3RD_CHRONICLE : OUT OF RANGE!!",0x4(%esp)
08546b82 +0x0ec:  lea    -0x18(%ebp),%eax
08546b85 +0x0ef:  mov    %eax,(%esp)
08546b88 +0x0f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08546b8d +0x0f7:  jmp    08546ba4 <+0x10e>
08546b8f +0x0f9:  mov    %edx,%ebx
08546b91 +0x0fb:  mov    %eax,%esi
08546b93 +0x0fd:  call   08725c30 <__cxa_end_catch>
08546b98 +0x102:  mov    %esi,%eax
08546b9a +0x104:  mov    %ebx,%edx
08546b9c +0x106:  mov    %eax,(%esp)
08546b9f +0x109:  call   08ae3750 <_Unwind_Resume>
08546ba4 +0x10e:  call   08725c30 <__cxa_end_catch>
08546ba9 +0x113:  jmp    08546baf <+0x119>
08546bab +0x115:  nop
08546bac +0x116:  jmp    08546baf <+0x119>
08546bae +0x118:  nop
08546baf +0x119:  lea    -0x8(%ebp),%esp
08546bb2 +0x11c:  add    $0x0,%esp
08546bb5 +0x11f:  pop    %ebx
08546bb6 +0x120:  pop    %esi
08546bb7 +0x121:  pop    %ebp
08546bb8 +0x122:  ret
08546bb9 +0x123:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_getAdditionalDisjointItem @ 0x8546a96

/* WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&,
   bool) */

void __thiscall
WongWork::CItemUpgrade::_getAdditionalDisjointItem
          (CItemUpgrade *this,uint param_1,CItem *param_2,vector *param_3,upgrade_table_t *param_4,
          bool param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint local_38;
  undefined4 local_32;
  short local_2e;
  pair<int,int> local_2c [8];
  ulong local_24 [6];
  
                    /* try { // try from 08546ab7 to 08546b4c has its CatchHandler @ 08546b4f */
  puVar2 = (undefined4 *)
           std::vector<STResultItemCnt,std::allocator<STResultItemCnt>>::at
                     ((vector<STResultItemCnt,std::allocator<STResultItemCnt>> *)(param_4 + 0x490),
                      param_1);
  uVar1 = *puVar2;
  local_2e = *(short *)(puVar2 + 1);
  local_32._0_2_ = (short)uVar1;
  if ((int)(short)local_32 == param_1) {
    local_38 = *(uint *)(param_4 + 0x48c);
    local_32._2_2_ = local_2e;
    if (!param_5) {
      local_32._2_2_ = (short)((uint)uVar1 >> 0x10);
    }
    if (local_32._2_2_ != 0) {
      local_32 = uVar1;
      std::make_pair<unsigned_long&,unsigned_int&>(local_24,&local_38);
      std::pair<int,int>::pair<unsigned_long,unsigned_int>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_2c);
    }
  }
  return;
}
```
