# IncreaseQueryCount

`_ZN13CQueryCounter18IncreaseQueryCountERKSs`

`CQueryCounter::IncreaseQueryCount(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ecc5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecc5e  _ZN13CQueryCounter18IncreaseQueryCountERKSs
#           CQueryCounter::IncreaseQueryCount(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x085ecc5e, 0x085ecee5]
085ecc5e +0x000:  push   %ebp
085ecc5f +0x001:  mov    %esp,%ebp
085ecc61 +0x003:  push   %esi
085ecc62 +0x004:  push   %ebx
085ecc63 +0x005:  sub    $0x30,%esp
085ecc66 +0x008:  movl   $0x0,0x8(%esp)
085ecc6e +0x010:  movl   $"log_query_ref",0x4(%esp)
085ecc76 +0x018:  mov    0xc(%ebp),%eax
085ecc79 +0x01b:  mov    %eax,(%esp)
085ecc7c +0x01e:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
085ecc81 +0x023:  cmp    $0xffffffff,%eax
085ecc84 +0x026:  setne  %al
085ecc87 +0x029:  test   %al,%al
085ecc89 +0x02b:  jne    085eced4 <+0x276>
085ecc8f +0x031:  movl   $0x0,0x8(%esp)
085ecc97 +0x039:  movl   $"from db_connect",0x4(%esp)
085ecc9f +0x041:  mov    0xc(%ebp),%eax
085ecca2 +0x044:  mov    %eax,(%esp)
085ecca5 +0x047:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
085eccaa +0x04c:  cmp    $0xffffffff,%eax
085eccad +0x04f:  setne  %al
085eccb0 +0x052:  test   %al,%al
085eccb2 +0x054:  jne    085eced7 <+0x279>
085eccb8 +0x05a:  mov    0x8(%ebp),%eax
085eccbb +0x05d:  lea    0x1c(%eax),%ecx
085eccbe +0x060:  lea    -0x10(%ebp),%eax
085eccc1 +0x063:  mov    0xc(%ebp),%edx
085eccc4 +0x066:  mov    %edx,0x8(%esp)
085eccc8 +0x06a:  mov    %ecx,0x4(%esp)
085ecccc +0x06e:  mov    %eax,(%esp)
085ecccf +0x071:  call   085ed96a <_GLOBAL__I_query_table+0x235>  ; global constructors keyed to query_table+0x235
085eccd4 +0x076:  sub    $0x4,%esp
085eccd7 +0x079:  mov    0x8(%ebp),%eax
085eccda +0x07c:  lea    0x1c(%eax),%edx
085eccdd +0x07f:  lea    -0xc(%ebp),%eax
085ecce0 +0x082:  mov    %edx,0x4(%esp)
085ecce4 +0x086:  mov    %eax,(%esp)
085ecce7 +0x089:  call   085ed996 <_GLOBAL__I_query_table+0x261>  ; global constructors keyed to query_table+0x261
085eccec +0x08e:  sub    $0x4,%esp
085eccef +0x091:  lea    -0xc(%ebp),%eax
085eccf2 +0x094:  mov    %eax,0x4(%esp)
085eccf6 +0x098:  lea    -0x10(%ebp),%eax
085eccf9 +0x09b:  mov    %eax,(%esp)
085eccfc +0x09e:  call   085ed9bc <_GLOBAL__I_query_table+0x287>  ; global constructors keyed to query_table+0x287
085ecd01 +0x0a3:  test   %al,%al
085ecd03 +0x0a5:  je     085ece7e <+0x220>
085ecd09 +0x0ab:  mov    0x8(%ebp),%eax
085ecd0c +0x0ae:  movzbl (%eax),%eax
085ecd0f +0x0b1:  test   %al,%al
085ecd11 +0x0b3:  je     085ece23 <+0x1c5>
085ecd17 +0x0b9:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085ecd1c +0x0be:  movl   $0x1d2,0x8(%esp)
085ecd24 +0x0c6:  movl   $"QueryCounter.cpp",0x4(%esp)
085ecd2c +0x0ce:  mov    %eax,(%esp)
085ecd2f +0x0d1:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085ecd34 +0x0d6:  movl   $0x1,0x8(%esp)
085ecd3c +0x0de:  mov    %eax,0x4(%esp)
085ecd40 +0x0e2:  lea    -0x1c(%ebp),%eax
085ecd43 +0x0e5:  mov    %eax,(%esp)
085ecd46 +0x0e8:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085ecd4b +0x0ed:  lea    -0x1c(%ebp),%eax
085ecd4e +0x0f0:  mov    %eax,(%esp)
085ecd51 +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecd56 +0x0f8:  movl   $0xbe,0x4(%esp)
085ecd5e +0x100:  mov    %eax,(%esp)
085ecd61 +0x103:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecd66 +0x108:  lea    -0x1c(%ebp),%eax
085ecd69 +0x10b:  mov    %eax,(%esp)
085ecd6c +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecd71 +0x113:  movl   $0xffffffff,0x4(%esp)
085ecd79 +0x11b:  mov    %eax,(%esp)
085ecd7c +0x11e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecd81 +0x123:  mov    0xc(%ebp),%eax
085ecd84 +0x126:  mov    %eax,(%esp)
085ecd87 +0x129:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
085ecd8c +0x12e:  mov    %eax,%ebx
085ecd8e +0x130:  lea    -0x1c(%ebp),%eax
085ecd91 +0x133:  mov    %eax,(%esp)
085ecd94 +0x136:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecd99 +0x13b:  mov    %ebx,0x4(%esp)
085ecd9d +0x13f:  mov    %eax,(%esp)
085ecda0 +0x142:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecda5 +0x147:  mov    0xc(%ebp),%eax
085ecda8 +0x14a:  mov    %eax,(%esp)
085ecdab +0x14d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
085ecdb0 +0x152:  mov    %eax,%esi
085ecdb2 +0x154:  mov    0xc(%ebp),%eax
085ecdb5 +0x157:  mov    %eax,(%esp)
085ecdb8 +0x15a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085ecdbd +0x15f:  mov    %eax,%ebx
085ecdbf +0x161:  lea    -0x1c(%ebp),%eax
085ecdc2 +0x164:  mov    %eax,(%esp)
085ecdc5 +0x167:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085ecdca +0x16c:  mov    %esi,0x8(%esp)
085ecdce +0x170:  mov    %ebx,0x4(%esp)
085ecdd2 +0x174:  mov    %eax,(%esp)
085ecdd5 +0x177:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
085ecdda +0x17c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085ecddf +0x181:  lea    -0x1c(%ebp),%edx
085ecde2 +0x184:  mov    %edx,0x8(%esp)
085ecde6 +0x188:  movl   $0x2,0x4(%esp)
085ecdee +0x190:  mov    %eax,(%esp)
085ecdf1 +0x193:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085ecdf6 +0x198:  jmp    085ece13 <+0x1b5>
085ecdf8 +0x19a:  mov    %edx,%ebx
085ecdfa +0x19c:  mov    %eax,%esi
085ecdfc +0x19e:  lea    -0x1c(%ebp),%eax
085ecdff +0x1a1:  mov    %eax,(%esp)
085ece02 +0x1a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ece07 +0x1a9:  mov    %esi,%eax
085ece09 +0x1ab:  mov    %ebx,%edx
085ece0b +0x1ad:  mov    %eax,(%esp)
085ece0e +0x1b0:  call   08ae3750 <_Unwind_Resume>
085ece13 +0x1b5:  lea    -0x1c(%ebp),%eax
085ece16 +0x1b8:  mov    %eax,(%esp)
085ece19 +0x1bb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ece1e +0x1c0:  jmp    085ecedb <+0x27d>
085ece23 +0x1c5:  movl   $0x0,-0x20(%ebp)
085ece2a +0x1cc:  mov    0xc(%ebp),%eax
085ece2d +0x1cf:  mov    %eax,(%esp)
085ece30 +0x1d2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085ece35 +0x1d7:  lea    -0x20(%ebp),%edx
085ece38 +0x1da:  mov    %edx,0x8(%esp)
085ece3c +0x1de:  mov    %eax,0x4(%esp)
085ece40 +0x1e2:  mov    0x8(%ebp),%eax
085ece43 +0x1e5:  mov    %eax,(%esp)
085ece46 +0x1e8:  call   085ed3a2 <_ZN13CQueryCounter9SaveQueryEPKcRi>  ; CQueryCounter::SaveQuery(char const*, int&)
085ece4b +0x1ed:  test   %al,%al
085ece4d +0x1ef:  je     085eceda <+0x27c>
085ece53 +0x1f5:  mov    -0x20(%ebp),%ebx
085ece56 +0x1f8:  mov    0xc(%ebp),%eax
085ece59 +0x1fb:  mov    %eax,(%esp)
085ece5c +0x1fe:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085ece61 +0x203:  movl   $0x0,0xc(%esp)
085ece69 +0x20b:  mov    %ebx,0x8(%esp)
085ece6d +0x20f:  mov    %eax,0x4(%esp)
085ece71 +0x213:  mov    0x8(%ebp),%eax
085ece74 +0x216:  mov    %eax,(%esp)
085ece77 +0x219:  call   085ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>  ; CQueryCounter::RegisterQuery(char const*, int, int)
085ece7c +0x21e:  jmp    085ecedb <+0x27d>
085ece7e +0x220:  lea    -0x10(%ebp),%eax
085ece81 +0x223:  mov    %eax,(%esp)
085ece84 +0x226:  call   085ed9d0 <_GLOBAL__I_query_table+0x29b>  ; global constructors keyed to query_table+0x29b
085ece89 +0x22b:  mov    0x4(%eax),%eax
085ece8c +0x22e:  mov    %eax,-0x14(%ebp)
085ece8f +0x231:  mov    0x8(%ebp),%eax
085ece92 +0x234:  mov    -0x14(%ebp),%edx
085ece95 +0x237:  mov    %edx,0x34(%eax)
085ece98 +0x23a:  lea    -0x14(%ebp),%eax
085ece9b +0x23d:  mov    %eax,(%esp)
085ece9e +0x240:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecea3 +0x245:  mov    0x4(%eax),%eax
085ecea6 +0x248:  test   %eax,%eax
085ecea8 +0x24a:  sete   %al
085eceab +0x24d:  test   %al,%al
085ecead +0x24f:  je     085ecebe <+0x260>
085eceaf +0x251:  mov    0x8(%ebp),%eax
085eceb2 +0x254:  mov    0x38(%eax),%eax
085eceb5 +0x257:  lea    0x1(%eax),%edx
085eceb8 +0x25a:  mov    0x8(%ebp),%eax
085ecebb +0x25d:  mov    %edx,0x38(%eax)
085ecebe +0x260:  lea    -0x14(%ebp),%eax
085ecec1 +0x263:  mov    %eax,(%esp)
085ecec4 +0x266:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecec9 +0x26b:  mov    0x4(%eax),%edx
085ececc +0x26e:  add    $0x1,%edx
085ececf +0x271:  mov    %edx,0x4(%eax)
085eced2 +0x274:  jmp    085ecedb <+0x27d>
085eced4 +0x276:  nop
085eced5 +0x277:  jmp    085ecedb <+0x27d>
085eced7 +0x279:  nop
085eced8 +0x27a:  jmp    085ecedb <+0x27d>
085eceda +0x27c:  nop
085ecedb +0x27d:  lea    -0x8(%ebp),%esp
085ecede +0x280:  add    $0x0,%esp
085ecee1 +0x283:  pop    %ebx
085ecee2 +0x284:  pop    %esi
085ecee3 +0x285:  pop    %ebp
085ecee4 +0x286:  ret
085ecee5 +0x287:  nop
```

## 反编译 C

```c
// CQueryCounter::IncreaseQueryCount @ 0x85ecc5e

/* CQueryCounter::IncreaseQueryCount(std::string const&) */

void __thiscall CQueryCounter::IncreaseQueryCount(CQueryCounter *this,string *param_1)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  void *pvVar5;
  char *pcVar6;
  int iVar7;
  int local_24;
  CStreamGuard local_20 [8];
  undefined4 local_18;
  string local_14;
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  local_10 [4];
  
  iVar2 = std::string::find((string *)param_1,"log_query_ref",0);
  if ((iVar2 == -1) &&
     (iVar2 = std::string::find((string *)param_1,"from db_connect",0), iVar2 == -1)) {
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::find(&local_14);
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
            ::operator==((_Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
                          *)&local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
              ::operator->((_Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
                            *)&local_14);
      local_18 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(this + 0x34) = local_18;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                         &local_18);
      if (*(int *)(iVar2 + 4) == 0) {
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                         &local_18);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    else if (*this == (CQueryCounter)0x0) {
      local_24 = 0;
      pcVar6 = (char *)std::string::c_str((string *)param_1);
      cVar1 = SaveQuery(this,pcVar6,&local_24);
      iVar2 = local_24;
      if (cVar1 != '\0') {
        iVar7 = std::string::c_str((string *)param_1);
        RegisterQuery((char *)this,iVar7,iVar2);
      }
    }
    else {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QueryCounter.cpp",0x1d2);
      CStreamGuard::CStreamGuard(local_20,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085ecd61 to 085ecdf5 has its CatchHandler @ 085ecdf8 */
      CStreamGuard::operator<<(pCVar4,0xbe);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,-1);
      iVar2 = std::string::size((string *)param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::string::size((string *)param_1);
      pvVar5 = (void *)std::string::c_str((string *)param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      CStreamGuard::put_binary(pCVar4,pvVar5,iVar2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
      CStreamGuard::~CStreamGuard(local_20);
    }
  }
  return;
}
```
