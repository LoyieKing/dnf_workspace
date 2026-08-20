# _Calculate_RegenCost

`_ZN15RegenerationROI20_Calculate_RegenCostEiiii`

`RegenerationROI::_Calculate_RegenCost(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f9094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f9094  _ZN15RegenerationROI20_Calculate_RegenCostEiiii
#           RegenerationROI::_Calculate_RegenCost(int, int, int, int)
# range [0x085f9094, 0x085f93cb]
085f9094 +0x000:  push   %ebp
085f9095 +0x001:  mov    %esp,%ebp
085f9097 +0x003:  sub    $0x68,%esp
085f909a +0x006:  movl   $0x0,-0x18(%ebp)
085f90a1 +0x00d:  movl   $0x0,-0x14(%ebp)
085f90a8 +0x014:  mov    0xc(%ebp),%eax
085f90ab +0x017:  test   %eax,%eax
085f90ad +0x019:  je     085f9237 <+0x1a3>
085f90b3 +0x01f:  mov    0xc(%ebp),%eax
085f90b6 +0x022:  cmp    $0x63,%eax
085f90b9 +0x025:  jg     085f9237 <+0x1a3>
085f90bf +0x02b:  mov    0x8(%ebp),%eax
085f90c2 +0x02e:  lea    0x1c(%eax),%ecx
085f90c5 +0x031:  lea    -0x34(%ebp),%eax
085f90c8 +0x034:  lea    0xc(%ebp),%edx
085f90cb +0x037:  mov    %edx,0x8(%esp)
085f90cf +0x03b:  mov    %ecx,0x4(%esp)
085f90d3 +0x03f:  mov    %eax,(%esp)
085f90d6 +0x042:  call   085f9ab0 <_GLOBAL__I__Z16_GetRandomOptionv+0x3e2>  ; global constructors keyed to _GetRandomOption()+0x3e2
085f90db +0x047:  sub    $0x4,%esp
085f90de +0x04a:  mov    0x8(%ebp),%eax
085f90e1 +0x04d:  lea    0x1c(%eax),%edx
085f90e4 +0x050:  lea    -0x30(%ebp),%eax
085f90e7 +0x053:  mov    %edx,0x4(%esp)
085f90eb +0x057:  mov    %eax,(%esp)
085f90ee +0x05a:  call   085f9adc <_GLOBAL__I__Z16_GetRandomOptionv+0x40e>  ; global constructors keyed to _GetRandomOption()+0x40e
085f90f3 +0x05f:  sub    $0x4,%esp
085f90f6 +0x062:  lea    -0x34(%ebp),%eax
085f90f9 +0x065:  mov    %eax,0x4(%esp)
085f90fd +0x069:  lea    -0x30(%ebp),%eax
085f9100 +0x06c:  mov    %eax,(%esp)
085f9103 +0x06f:  call   085f9b02 <_GLOBAL__I__Z16_GetRandomOptionv+0x434>  ; global constructors keyed to _GetRandomOption()+0x434
085f9108 +0x074:  test   %al,%al
085f910a +0x076:  je     085f922d <+0x199>
085f9110 +0x07c:  lea    -0x34(%ebp),%eax
085f9113 +0x07f:  mov    %eax,(%esp)
085f9116 +0x082:  call   085f9b16 <_GLOBAL__I__Z16_GetRandomOptionv+0x448>  ; global constructors keyed to _GetRandomOption()+0x448
085f911b +0x087:  add    $0x4,%eax
085f911e +0x08a:  mov    %eax,-0x10(%ebp)
085f9121 +0x08d:  lea    -0x38(%ebp),%eax
085f9124 +0x090:  lea    0x14(%ebp),%edx
085f9127 +0x093:  mov    %edx,0x8(%esp)
085f912b +0x097:  mov    -0x10(%ebp),%edx
085f912e +0x09a:  mov    %edx,0x4(%esp)
085f9132 +0x09e:  mov    %eax,(%esp)
085f9135 +0x0a1:  call   085f9b24 <_GLOBAL__I__Z16_GetRandomOptionv+0x456>  ; global constructors keyed to _GetRandomOption()+0x456
085f913a +0x0a6:  sub    $0x4,%esp
085f913d +0x0a9:  lea    -0x2c(%ebp),%eax
085f9140 +0x0ac:  mov    -0x10(%ebp),%edx
085f9143 +0x0af:  mov    %edx,0x4(%esp)
085f9147 +0x0b3:  mov    %eax,(%esp)
085f914a +0x0b6:  call   085f9b50 <_GLOBAL__I__Z16_GetRandomOptionv+0x482>  ; global constructors keyed to _GetRandomOption()+0x482
085f914f +0x0bb:  sub    $0x4,%esp
085f9152 +0x0be:  lea    -0x38(%ebp),%eax
085f9155 +0x0c1:  mov    %eax,0x4(%esp)
085f9159 +0x0c5:  lea    -0x2c(%ebp),%eax
085f915c +0x0c8:  mov    %eax,(%esp)
085f915f +0x0cb:  call   085f9b76 <_GLOBAL__I__Z16_GetRandomOptionv+0x4a8>  ; global constructors keyed to _GetRandomOption()+0x4a8
085f9164 +0x0d0:  test   %al,%al
085f9166 +0x0d2:  je     085f9192 <+0xfe>
085f9168 +0x0d4:  lea    -0x38(%ebp),%eax
085f916b +0x0d7:  mov    %eax,(%esp)
085f916e +0x0da:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f9173 +0x0df:  mov    0x4(%eax),%eax
085f9176 +0x0e2:  test   %eax,%eax
085f9178 +0x0e4:  sete   %al
085f917b +0x0e7:  test   %al,%al
085f917d +0x0e9:  je     085f919c <+0x108>
085f917f +0x0eb:  lea    -0x38(%ebp),%eax
085f9182 +0x0ee:  mov    %eax,(%esp)
085f9185 +0x0f1:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f918a +0x0f6:  mov    0x8(%eax),%eax
085f918d +0x0f9:  mov    %eax,-0x18(%ebp)
085f9190 +0x0fc:  jmp    085f919c <+0x108>
085f9192 +0x0fe:  mov    $0xffffffff,%eax
085f9197 +0x103:  jmp    085f93c9 <+0x335>
085f919c +0x108:  lea    -0x4c(%ebp),%eax
085f919f +0x10b:  lea    0x18(%ebp),%edx
085f91a2 +0x10e:  mov    %edx,0x8(%esp)
085f91a6 +0x112:  mov    -0x10(%ebp),%edx
085f91a9 +0x115:  mov    %edx,0x4(%esp)
085f91ad +0x119:  mov    %eax,(%esp)
085f91b0 +0x11c:  call   085f9b24 <_GLOBAL__I__Z16_GetRandomOptionv+0x456>  ; global constructors keyed to _GetRandomOption()+0x456
085f91b5 +0x121:  sub    $0x4,%esp
085f91b8 +0x124:  mov    -0x4c(%ebp),%eax
085f91bb +0x127:  mov    %eax,-0x38(%ebp)
085f91be +0x12a:  lea    -0x28(%ebp),%eax
085f91c1 +0x12d:  mov    -0x10(%ebp),%edx
085f91c4 +0x130:  mov    %edx,0x4(%esp)
085f91c8 +0x134:  mov    %eax,(%esp)
085f91cb +0x137:  call   085f9b50 <_GLOBAL__I__Z16_GetRandomOptionv+0x482>  ; global constructors keyed to _GetRandomOption()+0x482
085f91d0 +0x13c:  sub    $0x4,%esp
085f91d3 +0x13f:  lea    -0x38(%ebp),%eax
085f91d6 +0x142:  mov    %eax,0x4(%esp)
085f91da +0x146:  lea    -0x28(%ebp),%eax
085f91dd +0x149:  mov    %eax,(%esp)
085f91e0 +0x14c:  call   085f9b76 <_GLOBAL__I__Z16_GetRandomOptionv+0x4a8>  ; global constructors keyed to _GetRandomOption()+0x4a8
085f91e5 +0x151:  test   %al,%al
085f91e7 +0x153:  je     085f9223 <+0x18f>
085f91e9 +0x155:  lea    -0x38(%ebp),%eax
085f91ec +0x158:  mov    %eax,(%esp)
085f91ef +0x15b:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f91f4 +0x160:  mov    0x4(%eax),%eax
085f91f7 +0x163:  test   %eax,%eax
085f91f9 +0x165:  sete   %al
085f91fc +0x168:  test   %al,%al
085f91fe +0x16a:  je     085f9237 <+0x1a3>
085f9200 +0x16c:  lea    -0x38(%ebp),%eax
085f9203 +0x16f:  mov    %eax,(%esp)
085f9206 +0x172:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f920b +0x177:  mov    0x8(%eax),%eax
085f920e +0x17a:  add    %eax,-0x18(%ebp)
085f9211 +0x17d:  mov    -0x18(%ebp),%eax
085f9214 +0x180:  mov    %eax,%edx
085f9216 +0x182:  shr    $0x1f,%edx
085f9219 +0x185:  lea    (%edx,%eax,1),%eax
085f921c +0x188:  sar    %eax
085f921e +0x18a:  mov    %eax,-0x18(%ebp)
085f9221 +0x18d:  jmp    085f9237 <+0x1a3>
085f9223 +0x18f:  mov    $0xffffffff,%eax
085f9228 +0x194:  jmp    085f93c9 <+0x335>
085f922d +0x199:  mov    $0xffffffff,%eax
085f9232 +0x19e:  jmp    085f93c9 <+0x335>
085f9237 +0x1a3:  mov    0x10(%ebp),%eax
085f923a +0x1a6:  test   %eax,%eax
085f923c +0x1a8:  je     085f93c0 <+0x32c>
085f9242 +0x1ae:  mov    0x10(%ebp),%eax
085f9245 +0x1b1:  cmp    $0x64,%eax
085f9248 +0x1b4:  jle    085f93c0 <+0x32c>
085f924e +0x1ba:  mov    0x8(%ebp),%eax
085f9251 +0x1bd:  lea    0x1c(%eax),%ecx
085f9254 +0x1c0:  lea    -0x3c(%ebp),%eax
085f9257 +0x1c3:  lea    0x10(%ebp),%edx
085f925a +0x1c6:  mov    %edx,0x8(%esp)
085f925e +0x1ca:  mov    %ecx,0x4(%esp)
085f9262 +0x1ce:  mov    %eax,(%esp)
085f9265 +0x1d1:  call   085f9ab0 <_GLOBAL__I__Z16_GetRandomOptionv+0x3e2>  ; global constructors keyed to _GetRandomOption()+0x3e2
085f926a +0x1d6:  sub    $0x4,%esp
085f926d +0x1d9:  mov    0x8(%ebp),%eax
085f9270 +0x1dc:  lea    0x1c(%eax),%edx
085f9273 +0x1df:  lea    -0x24(%ebp),%eax
085f9276 +0x1e2:  mov    %edx,0x4(%esp)
085f927a +0x1e6:  mov    %eax,(%esp)
085f927d +0x1e9:  call   085f9adc <_GLOBAL__I__Z16_GetRandomOptionv+0x40e>  ; global constructors keyed to _GetRandomOption()+0x40e
085f9282 +0x1ee:  sub    $0x4,%esp
085f9285 +0x1f1:  lea    -0x3c(%ebp),%eax
085f9288 +0x1f4:  mov    %eax,0x4(%esp)
085f928c +0x1f8:  lea    -0x24(%ebp),%eax
085f928f +0x1fb:  mov    %eax,(%esp)
085f9292 +0x1fe:  call   085f9b02 <_GLOBAL__I__Z16_GetRandomOptionv+0x434>  ; global constructors keyed to _GetRandomOption()+0x434
085f9297 +0x203:  test   %al,%al
085f9299 +0x205:  je     085f93b9 <+0x325>
085f929f +0x20b:  lea    -0x3c(%ebp),%eax
085f92a2 +0x20e:  mov    %eax,(%esp)
085f92a5 +0x211:  call   085f9b16 <_GLOBAL__I__Z16_GetRandomOptionv+0x448>  ; global constructors keyed to _GetRandomOption()+0x448
085f92aa +0x216:  add    $0x4,%eax
085f92ad +0x219:  mov    %eax,-0xc(%ebp)
085f92b0 +0x21c:  lea    -0x40(%ebp),%eax
085f92b3 +0x21f:  lea    0x14(%ebp),%edx
085f92b6 +0x222:  mov    %edx,0x8(%esp)
085f92ba +0x226:  mov    -0xc(%ebp),%edx
085f92bd +0x229:  mov    %edx,0x4(%esp)
085f92c1 +0x22d:  mov    %eax,(%esp)
085f92c4 +0x230:  call   085f9b24 <_GLOBAL__I__Z16_GetRandomOptionv+0x456>  ; global constructors keyed to _GetRandomOption()+0x456
085f92c9 +0x235:  sub    $0x4,%esp
085f92cc +0x238:  lea    -0x20(%ebp),%eax
085f92cf +0x23b:  mov    -0xc(%ebp),%edx
085f92d2 +0x23e:  mov    %edx,0x4(%esp)
085f92d6 +0x242:  mov    %eax,(%esp)
085f92d9 +0x245:  call   085f9b50 <_GLOBAL__I__Z16_GetRandomOptionv+0x482>  ; global constructors keyed to _GetRandomOption()+0x482
085f92de +0x24a:  sub    $0x4,%esp
085f92e1 +0x24d:  lea    -0x40(%ebp),%eax
085f92e4 +0x250:  mov    %eax,0x4(%esp)
085f92e8 +0x254:  lea    -0x20(%ebp),%eax
085f92eb +0x257:  mov    %eax,(%esp)
085f92ee +0x25a:  call   085f9b76 <_GLOBAL__I__Z16_GetRandomOptionv+0x4a8>  ; global constructors keyed to _GetRandomOption()+0x4a8
085f92f3 +0x25f:  test   %al,%al
085f92f5 +0x261:  je     085f9321 <+0x28d>
085f92f7 +0x263:  lea    -0x40(%ebp),%eax
085f92fa +0x266:  mov    %eax,(%esp)
085f92fd +0x269:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f9302 +0x26e:  mov    0x4(%eax),%eax
085f9305 +0x271:  test   %eax,%eax
085f9307 +0x273:  sete   %al
085f930a +0x276:  test   %al,%al
085f930c +0x278:  je     085f932b <+0x297>
085f930e +0x27a:  lea    -0x40(%ebp),%eax
085f9311 +0x27d:  mov    %eax,(%esp)
085f9314 +0x280:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f9319 +0x285:  mov    0x8(%eax),%eax
085f931c +0x288:  mov    %eax,-0x14(%ebp)
085f931f +0x28b:  jmp    085f932b <+0x297>
085f9321 +0x28d:  mov    $0xffffffff,%eax
085f9326 +0x292:  jmp    085f93c9 <+0x335>
085f932b +0x297:  lea    -0x4c(%ebp),%eax
085f932e +0x29a:  lea    0x18(%ebp),%edx
085f9331 +0x29d:  mov    %edx,0x8(%esp)
085f9335 +0x2a1:  mov    -0xc(%ebp),%edx
085f9338 +0x2a4:  mov    %edx,0x4(%esp)
085f933c +0x2a8:  mov    %eax,(%esp)
085f933f +0x2ab:  call   085f9b24 <_GLOBAL__I__Z16_GetRandomOptionv+0x456>  ; global constructors keyed to _GetRandomOption()+0x456
085f9344 +0x2b0:  sub    $0x4,%esp
085f9347 +0x2b3:  mov    -0x4c(%ebp),%eax
085f934a +0x2b6:  mov    %eax,-0x40(%ebp)
085f934d +0x2b9:  lea    -0x1c(%ebp),%eax
085f9350 +0x2bc:  mov    -0xc(%ebp),%edx
085f9353 +0x2bf:  mov    %edx,0x4(%esp)
085f9357 +0x2c3:  mov    %eax,(%esp)
085f935a +0x2c6:  call   085f9b50 <_GLOBAL__I__Z16_GetRandomOptionv+0x482>  ; global constructors keyed to _GetRandomOption()+0x482
085f935f +0x2cb:  sub    $0x4,%esp
085f9362 +0x2ce:  lea    -0x40(%ebp),%eax
085f9365 +0x2d1:  mov    %eax,0x4(%esp)
085f9369 +0x2d5:  lea    -0x1c(%ebp),%eax
085f936c +0x2d8:  mov    %eax,(%esp)
085f936f +0x2db:  call   085f9b76 <_GLOBAL__I__Z16_GetRandomOptionv+0x4a8>  ; global constructors keyed to _GetRandomOption()+0x4a8
085f9374 +0x2e0:  test   %al,%al
085f9376 +0x2e2:  je     085f93b2 <+0x31e>
085f9378 +0x2e4:  lea    -0x40(%ebp),%eax
085f937b +0x2e7:  mov    %eax,(%esp)
085f937e +0x2ea:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f9383 +0x2ef:  mov    0x4(%eax),%eax
085f9386 +0x2f2:  test   %eax,%eax
085f9388 +0x2f4:  sete   %al
085f938b +0x2f7:  test   %al,%al
085f938d +0x2f9:  je     085f93c0 <+0x32c>
085f938f +0x2fb:  lea    -0x40(%ebp),%eax
085f9392 +0x2fe:  mov    %eax,(%esp)
085f9395 +0x301:  call   085f9b8a <_GLOBAL__I__Z16_GetRandomOptionv+0x4bc>  ; global constructors keyed to _GetRandomOption()+0x4bc
085f939a +0x306:  mov    0x8(%eax),%eax
085f939d +0x309:  add    %eax,-0x14(%ebp)
085f93a0 +0x30c:  mov    -0x14(%ebp),%eax
085f93a3 +0x30f:  mov    %eax,%edx
085f93a5 +0x311:  shr    $0x1f,%edx
085f93a8 +0x314:  lea    (%edx,%eax,1),%eax
085f93ab +0x317:  sar    %eax
085f93ad +0x319:  mov    %eax,-0x14(%ebp)
085f93b0 +0x31c:  jmp    085f93c0 <+0x32c>
085f93b2 +0x31e:  mov    $0xffffffff,%eax
085f93b7 +0x323:  jmp    085f93c9 <+0x335>
085f93b9 +0x325:  mov    $0xffffffff,%eax
085f93be +0x32a:  jmp    085f93c9 <+0x335>
085f93c0 +0x32c:  mov    -0x14(%ebp),%eax
085f93c3 +0x32f:  mov    -0x18(%ebp),%edx
085f93c6 +0x332:  lea    (%edx,%eax,1),%eax
085f93c9 +0x335:  leave
085f93ca +0x336:  ret
085f93cb +0x337:  nop
```

## 反编译 C

```c
// RegenerationROI::_Calculate_RegenCost @ 0x85f9094

/* RegenerationROI::_Calculate_RegenCost(int, int, int, int) */

int RegenerationROI::_Calculate_RegenCost(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int local_50 [3];
  int local_44;
  _Rb_tree_iterator local_40 [4];
  int local_3c;
  _Rb_tree_iterator local_38 [4];
  map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
  local_34 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_30 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_2c [4];
  map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
  local_28 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_24 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  local_18 = 0;
  if ((param_2 != 0) && (param_2 < 100)) {
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::find((int *)local_38);
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::end(local_34);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                          *)local_34,local_38);
    if (cVar1 == '\0') {
      return -1;
    }
    local_14 = std::
               _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                             *)local_38);
    local_14 = local_14 + 4;
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (&local_3c);
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_30,
                       (_Rb_tree_iterator *)&local_3c);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
      local_1c = *(int *)(iVar2 + 8);
    }
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (local_50);
    local_3c = local_50[0];
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_2c,
                       (_Rb_tree_iterator *)&local_3c);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
      local_1c = (local_1c + *(int *)(iVar2 + 8)) / 2;
    }
  }
  if ((param_3 != 0) && (100 < param_3)) {
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::find((int *)local_40);
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::end(local_28);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                          *)local_28,local_40);
    if (cVar1 == '\0') {
      return -1;
    }
    local_10 = std::
               _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                             *)local_40);
    local_10 = local_10 + 4;
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (&local_44);
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_24,
                       (_Rb_tree_iterator *)&local_44);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
      local_18 = *(int *)(iVar2 + 8);
    }
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (local_50);
    local_44 = local_50[0];
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_20,
                       (_Rb_tree_iterator *)&local_44);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
      local_18 = (local_18 + *(int *)(iVar2 + 8)) / 2;
    }
  }
  return local_1c + local_18;
}
```
