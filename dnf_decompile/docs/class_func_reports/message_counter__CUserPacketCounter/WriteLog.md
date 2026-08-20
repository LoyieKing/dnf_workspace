# WriteLog

`_ZN15message_counter18CUserPacketCounter8WriteLogEv`

`message_counter::CUserPacketCounter::WriteLog()`

| 类 | 地址 |
|---|---|
| `message_counter::CUserPacketCounter` | `0x0856fff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856fff0  _ZN15message_counter18CUserPacketCounter8WriteLogEv
#           message_counter::CUserPacketCounter::WriteLog()
# range [0x0856fff0, 0x0857011e]
0856fff0 +0x000:  push   %ebp
0856fff1 +0x001:  mov    %esp,%ebp
0856fff3 +0x003:  push   %edi
0856fff4 +0x004:  push   %esi
0856fff5 +0x005:  push   %ebx
0856fff6 +0x006:  sub    $0x4c,%esp
0856fff9 +0x009:  mov    0x8(%ebp),%eax
0856fffc +0x00c:  mov    0x118(%eax),%ebx
08570002 +0x012:  mov    0x8(%ebp),%eax
08570005 +0x015:  lea    0x18(%eax),%esi
08570008 +0x018:  movl   $0x9d,0x8(%esp)
08570010 +0x020:  movl   $&_ZZN15message_counter18CUserPacketCounter8WriteLogEvE19__PRETTY_FUNCTION__,0x4(%esp)
08570018 +0x028:  lea    -0x2c(%ebp),%eax
0857001b +0x02b:  mov    %eax,(%esp)
0857001e +0x02e:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
08570023 +0x033:  mov    %ebx,0xc(%esp)
08570027 +0x037:  movl   $"user_packet_counter total_count(%d)",0x8(%esp)
0857002f +0x03f:  mov    %esi,0x4(%esp)
08570033 +0x043:  lea    -0x2c(%ebp),%eax
08570036 +0x046:  mov    %eax,(%esp)
08570039 +0x049:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0857003e +0x04e:  mov    0x8(%ebp),%edx
08570041 +0x051:  lea    -0x30(%ebp),%eax
08570044 +0x054:  mov    %edx,0x4(%esp)
08570048 +0x058:  mov    %eax,(%esp)
0857004b +0x05b:  call   08451966 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x457c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x457c
08570050 +0x060:  sub    $0x4,%esp
08570053 +0x063:  jmp    085700cd <+0xdd>
08570055 +0x065:  lea    -0x30(%ebp),%eax
08570058 +0x068:  mov    %eax,(%esp)
0857005b +0x06b:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
08570060 +0x070:  mov    0x4(%eax),%esi
08570063 +0x073:  lea    -0x30(%ebp),%eax
08570066 +0x076:  mov    %eax,(%esp)
08570069 +0x079:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
0857006e +0x07e:  mov    (%eax),%eax
08570070 +0x080:  movl   $0x0,0x4(%esp)
08570078 +0x088:  mov    %eax,(%esp)
0857007b +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08570080 +0x090:  mov    %eax,%ebx
08570082 +0x092:  mov    0x8(%ebp),%eax
08570085 +0x095:  lea    0x18(%eax),%edi
08570088 +0x098:  movl   $0xa0,0x8(%esp)
08570090 +0x0a0:  movl   $&_ZZN15message_counter18CUserPacketCounter8WriteLogEvE19__PRETTY_FUNCTION__,0x4(%esp)
08570098 +0x0a8:  lea    -0x20(%ebp),%eax
0857009b +0x0ab:  mov    %eax,(%esp)
0857009e +0x0ae:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
085700a3 +0x0b3:  mov    %esi,0x10(%esp)
085700a7 +0x0b7:  mov    %ebx,0xc(%esp)
085700ab +0x0bb:  movl   $"(%s,%12d)",0x8(%esp)
085700b3 +0x0c3:  mov    %edi,0x4(%esp)
085700b7 +0x0c7:  lea    -0x20(%ebp),%eax
085700ba +0x0ca:  mov    %eax,(%esp)
085700bd +0x0cd:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
085700c2 +0x0d2:  lea    -0x30(%ebp),%eax
085700c5 +0x0d5:  mov    %eax,(%esp)
085700c8 +0x0d8:  call   0845198c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x45a2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x45a2
085700cd +0x0dd:  mov    0x8(%ebp),%edx
085700d0 +0x0e0:  lea    -0x24(%ebp),%eax
085700d3 +0x0e3:  mov    %edx,0x4(%esp)
085700d7 +0x0e7:  mov    %eax,(%esp)
085700da +0x0ea:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
085700df +0x0ef:  sub    $0x4,%esp
085700e2 +0x0f2:  lea    -0x24(%ebp),%eax
085700e5 +0x0f5:  mov    %eax,0x4(%esp)
085700e9 +0x0f9:  lea    -0x30(%ebp),%eax
085700ec +0x0fc:  mov    %eax,(%esp)
085700ef +0x0ff:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
085700f4 +0x104:  test   %al,%al
085700f6 +0x106:  jne    08570055 <+0x65>
085700fc +0x10c:  mov    0x8(%ebp),%eax
085700ff +0x10f:  movl   $0x0,0x118(%eax)
08570109 +0x119:  mov    0x8(%ebp),%eax
0857010c +0x11c:  mov    %eax,(%esp)
0857010f +0x11f:  call   085704a4 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x345>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x345
08570114 +0x124:  lea    -0xc(%ebp),%esp
08570117 +0x127:  add    $0x0,%esp
0857011a +0x12a:  pop    %ebx
0857011b +0x12b:  pop    %esi
0857011c +0x12c:  pop    %edi
0857011d +0x12d:  pop    %ebp
0857011e +0x12e:  ret
```

## 反编译 C

```c
// message_counter::CUserPacketCounter::WriteLog @ 0x856fff0

/* message_counter::CUserPacketCounter::WriteLog() */

void __thiscall message_counter::CUserPacketCounter::WriteLog(CUserPacketCounter *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_34 [4];
  CMyFileLog local_30 [8];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_28 [4];
  CMyFileLog local_24 [20];
  
  uVar1 = *(undefined4 *)(this + 0x118);
  CMyFileLog::CMyFileLog(local_30,"void message_counter::CUserPacketCounter::WriteLog()",0x9d);
  CMyFileLog::operator()(local_30,(char *)(this + 0x18),"user_packet_counter total_count(%d)",uVar1)
  ;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  begin(local_34);
  while( true ) {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34,
                       (_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    puVar4 = (uint *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
    uVar5 = NumberToString(*puVar4,0);
    CMyFileLog::CMyFileLog(local_24,"void message_counter::CUserPacketCounter::WriteLog()",0xa0);
    CMyFileLog::operator()(local_24,(char *)(this + 0x18),"(%s,%12d)",uVar5,uVar1);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
  }
  *(undefined4 *)(this + 0x118) = 0;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  clear((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
         *)this);
  return;
}
```
