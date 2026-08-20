# Set_APC_Info

`_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo`

`TowerOfDespair_APC_Mgr::Set_APC_Info(TOD_Layer const&, _APCInfo const&)`

| 类 | 地址 |
|---|---|
| `TowerOfDespair_APC_Mgr` | `0x085fed2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fed2e  _ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo
#           TowerOfDespair_APC_Mgr::Set_APC_Info(TOD_Layer const&, _APCInfo const&)
# range [0x085fed2e, 0x085feecf]
085fed2e +0x000:  push   %ebp
085fed2f +0x001:  mov    %esp,%ebp
085fed31 +0x003:  push   %esi
085fed32 +0x004:  push   %ebx
085fed33 +0x005:  sub    $0x45c20,%esp
085fed39 +0x00b:  lea    -&_ZL14gUnicodeBuffer+0x242dc(%ebp),%eax
085fed3f +0x011:  mov    %eax,(%esp)
085fed42 +0x014:  call   085ff170 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x93>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x93
085fed47 +0x019:  mov    0x8(%ebp),%edx
085fed4a +0x01c:  lea    -&_ZL14gUnicodeBuffer+0x242d8(%ebp),%eax
085fed50 +0x022:  mov    %edx,0x4(%esp)
085fed54 +0x026:  mov    %eax,(%esp)
085fed57 +0x029:  call   085ff1aa <_GLOBAL__I__ZN9TOD_LayerC2Et+0xcd>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xcd
085fed5c +0x02e:  sub    $0x4,%esp
085fed5f +0x031:  mov    0x8(%ebp),%edx
085fed62 +0x034:  lea    -0x45c0c(%ebp),%eax
085fed68 +0x03a:  mov    0xc(%ebp),%ecx
085fed6b +0x03d:  mov    %ecx,0x8(%esp)
085fed6f +0x041:  mov    %edx,0x4(%esp)
085fed73 +0x045:  mov    %eax,(%esp)
085fed76 +0x048:  call   085ff17e <_GLOBAL__I__ZN9TOD_LayerC2Et+0xa1>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xa1
085fed7b +0x04d:  sub    $0x4,%esp
085fed7e +0x050:  mov    -0x45c0c(%ebp),%eax
085fed84 +0x056:  mov    %eax,-&_ZL14gUnicodeBuffer+0x242dc(%ebp)
085fed8a +0x05c:  lea    -&_ZL14gUnicodeBuffer+0x242d8(%ebp),%eax
085fed90 +0x062:  mov    %eax,0x4(%esp)
085fed94 +0x066:  lea    -&_ZL14gUnicodeBuffer+0x242dc(%ebp),%eax
085fed9a +0x06c:  mov    %eax,(%esp)
085fed9d +0x06f:  call   085ff1d0 <_GLOBAL__I__ZN9TOD_LayerC2Et+0xf3>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xf3
085feda2 +0x074:  test   %al,%al
085feda4 +0x076:  je     085fedcb <+0x9d>
085feda6 +0x078:  lea    -&_ZL14gUnicodeBuffer+0x242dc(%ebp),%eax
085fedac +0x07e:  mov    %eax,(%esp)
085fedaf +0x081:  call   085ff1e4 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x107>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x107
085fedb4 +0x086:  lea    0x4(%eax),%edx
085fedb7 +0x089:  mov    0x10(%ebp),%eax
085fedba +0x08c:  mov    %eax,0x4(%esp)
085fedbe +0x090:  mov    %edx,(%esp)
085fedc1 +0x093:  call   085fe8e0 <_ZN15SendingAPC_Info8set_dataERK8_APCInfo>  ; SendingAPC_Info::set_data(_APCInfo const&)
085fedc6 +0x098:  jmp    085feec6 <+0x198>
085fedcb +0x09d:  lea    -0x45bfc(%ebp),%eax
085fedd1 +0x0a3:  mov    %eax,(%esp)
085fedd4 +0x0a6:  call   085fe860 <_ZN15SendingAPC_InfoC1Ev>  ; SendingAPC_Info::SendingAPC_Info()
085fedd9 +0x0ab:  mov    0x10(%ebp),%eax
085feddc +0x0ae:  mov    %eax,0x4(%esp)
085fede0 +0x0b2:  lea    -0x45bfc(%ebp),%eax
085fede6 +0x0b8:  mov    %eax,(%esp)
085fede9 +0x0bb:  call   085fe8e0 <_ZN15SendingAPC_Info8set_dataERK8_APCInfo>  ; SendingAPC_Info::set_data(_APCInfo const&)
085fedee +0x0c0:  lea    -&_ZL14gUnicodeBuffer+0xced4(%ebp),%eax
085fedf4 +0x0c6:  lea    -0x45bfc(%ebp),%edx
085fedfa +0x0cc:  mov    %edx,0x8(%esp)
085fedfe +0x0d0:  mov    0xc(%ebp),%edx
085fee01 +0x0d3:  mov    %edx,0x4(%esp)
085fee05 +0x0d7:  mov    %eax,(%esp)
085fee08 +0x0da:  call   085ff1f1 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x114>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x114
085fee0d +0x0df:  sub    $0x4,%esp
085fee10 +0x0e2:  lea    -&_ZL14gUnicodeBuffer+0xced4(%ebp),%eax
085fee16 +0x0e8:  mov    %eax,0x4(%esp)
085fee1a +0x0ec:  lea    -&_ZL14gUnicodeBuffer+0x242cc(%ebp),%eax
085fee20 +0x0f2:  mov    %eax,(%esp)
085fee23 +0x0f5:  call   085ff236 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x159>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x159
085fee28 +0x0fa:  mov    0x8(%ebp),%edx
085fee2b +0x0fd:  lea    -&_ZL14gUnicodeBuffer+0x242d4(%ebp),%eax
085fee31 +0x103:  lea    -&_ZL14gUnicodeBuffer+0x242cc(%ebp),%ecx
085fee37 +0x109:  mov    %ecx,0x8(%esp)
085fee3b +0x10d:  mov    %edx,0x4(%esp)
085fee3f +0x111:  mov    %eax,(%esp)
085fee42 +0x114:  call   085ff282 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x1a5>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x1a5
085fee47 +0x119:  sub    $0x4,%esp
085fee4a +0x11c:  lea    -&_ZL14gUnicodeBuffer+0x242cc(%ebp),%eax
085fee50 +0x122:  mov    %eax,(%esp)
085fee53 +0x125:  call   085ff15a <_GLOBAL__I__ZN9TOD_LayerC2Et+0x7d>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x7d
085fee58 +0x12a:  jmp    085fee8a <+0x15c>
085fee5a +0x12c:  mov    %edx,%ebx
085fee5c +0x12e:  mov    %eax,%esi
085fee5e +0x130:  lea    -&_ZL14gUnicodeBuffer+0x242cc(%ebp),%eax
085fee64 +0x136:  mov    %eax,(%esp)
085fee67 +0x139:  call   085ff15a <_GLOBAL__I__ZN9TOD_LayerC2Et+0x7d>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x7d
085fee6c +0x13e:  mov    %esi,%eax
085fee6e +0x140:  mov    %ebx,%edx
085fee70 +0x142:  jmp    085fee72 <+0x144>
085fee72 +0x144:  mov    %edx,%ebx
085fee74 +0x146:  mov    %eax,%esi
085fee76 +0x148:  lea    -&_ZL14gUnicodeBuffer+0xced4(%ebp),%eax
085fee7c +0x14e:  mov    %eax,(%esp)
085fee7f +0x151:  call   085ff144 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x67>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x67
085fee84 +0x156:  mov    %esi,%eax
085fee86 +0x158:  mov    %ebx,%edx
085fee88 +0x15a:  jmp    085fee9a <+0x16c>
085fee8a +0x15c:  lea    -&_ZL14gUnicodeBuffer+0xced4(%ebp),%eax
085fee90 +0x162:  mov    %eax,(%esp)
085fee93 +0x165:  call   085ff144 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x67>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x67
085fee98 +0x16a:  jmp    085feeb8 <+0x18a>
085fee9a +0x16c:  mov    %edx,%ebx
085fee9c +0x16e:  mov    %eax,%esi
085fee9e +0x170:  lea    -0x45bfc(%ebp),%eax
085feea4 +0x176:  mov    %eax,(%esp)
085feea7 +0x179:  call   085fe8ca <_ZN15SendingAPC_InfoD1Ev>  ; SendingAPC_Info::~SendingAPC_Info()
085feeac +0x17e:  mov    %esi,%eax
085feeae +0x180:  mov    %ebx,%edx
085feeb0 +0x182:  mov    %eax,(%esp)
085feeb3 +0x185:  call   08ae3750 <_Unwind_Resume>
085feeb8 +0x18a:  lea    -0x45bfc(%ebp),%eax
085feebe +0x190:  mov    %eax,(%esp)
085feec1 +0x193:  call   085fe8ca <_ZN15SendingAPC_InfoD1Ev>  ; SendingAPC_Info::~SendingAPC_Info()
085feec6 +0x198:  lea    -0x8(%ebp),%esp
085feec9 +0x19b:  add    $0x0,%esp
085feecc +0x19e:  pop    %ebx
085feecd +0x19f:  pop    %esi
085feece +0x1a0:  pop    %ebp
085feecf +0x1a1:  ret
```

## 反编译 C

```c
// TowerOfDespair_APC_Mgr::Set_APC_Info @ 0x85fed2e

/* TowerOfDespair_APC_Mgr::Set_APC_Info(TOD_Layer const&, _APCInfo const&) */

void __thiscall
TowerOfDespair_APC_Mgr::Set_APC_Info
          (TowerOfDespair_APC_Mgr *this,TOD_Layer *param_1,_APCInfo *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 auStack_45c10 [4];
  SendingAPC_Info aSStack_45c00 [95220];
  undefined4 uStack_2e80c;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  amStack_2e808 [4];
  pair apStack_2e804 [8];
  pair<TOD_Layer_const,SendingAPC_Info> apStack_2e7fc [95224];
  TOD_Layer aTStack_17404 [95224];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&uStack_2e80c);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(amStack_2e808);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)auStack_45c10);
  uStack_2e80c = auStack_45c10[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&uStack_2e80c,
                     (_Rb_tree_iterator *)amStack_2e808);
  if (cVar1 == '\0') {
    SendingAPC_Info::SendingAPC_Info(aSStack_45c00);
    SendingAPC_Info::set_data(aSStack_45c00,param_2);
                    /* try { // try from 085fee08 to 085fee0c has its CatchHandler @ 085fee9a */
    std::make_pair<TOD_Layer_const&,SendingAPC_Info&>(aTStack_17404,(SendingAPC_Info *)param_1);
                    /* try { // try from 085fee23 to 085fee27 has its CatchHandler @ 085fee72 */
    std::pair<TOD_Layer_const,SendingAPC_Info>::pair<TOD_Layer,SendingAPC_Info>
              (apStack_2e7fc,aTStack_17404);
                    /* try { // try from 085fee42 to 085fee46 has its CatchHandler @ 085fee5a */
    std::
    map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
    ::insert(apStack_2e804);
                    /* try { // try from 085fee53 to 085fee57 has its CatchHandler @ 085fee72 */
    std::pair<TOD_Layer_const,SendingAPC_Info>::~pair(apStack_2e7fc);
                    /* try { // try from 085fee93 to 085fee97 has its CatchHandler @ 085fee9a */
    std::pair<TOD_Layer,SendingAPC_Info>::~pair((pair<TOD_Layer,SendingAPC_Info> *)aTStack_17404);
    SendingAPC_Info::~SendingAPC_Info(aSStack_45c00);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)
                       &uStack_2e80c);
    SendingAPC_Info::set_data((SendingAPC_Info *)(iVar2 + 4),param_2);
  }
  return;
}
```
