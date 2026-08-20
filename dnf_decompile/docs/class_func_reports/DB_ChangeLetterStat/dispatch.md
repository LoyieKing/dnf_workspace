# dispatch

`_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream`

`DB_ChangeLetterStat::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ChangeLetterStat` | `0x0842602e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842602e  _ZN19DB_ChangeLetterStat8dispatchEiiP6Stream
#           DB_ChangeLetterStat::dispatch(int, int, Stream*)
# range [0x0842602e, 0x084261fb]
0842602e +0x000:  push   %ebp
0842602f +0x001:  mov    %esp,%ebp
08426031 +0x003:  sub    $0x38,%esp
08426034 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08426039 +0x00b:  movl   $0x0,0x8(%esp)
08426041 +0x013:  movl   $0x3,0x4(%esp)
08426049 +0x01b:  mov    %eax,(%esp)
0842604c +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08426051 +0x023:  mov    %eax,-0x10(%ebp)
08426054 +0x026:  mov    0x14(%ebp),%eax
08426057 +0x029:  mov    %eax,(%esp)
0842605a +0x02c:  call   08452000 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4c16>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4c16
0842605f +0x031:  mov    %eax,-0xc(%ebp)
08426062 +0x034:  mov    -0xc(%ebp),%eax
08426065 +0x037:  movzwl 0x8(%eax),%eax
08426069 +0x03b:  cwtl
0842606a +0x03c:  test   %eax,%eax
0842606c +0x03e:  je     08426084 <+0x56>
0842606e +0x040:  test   %eax,%eax
08426070 +0x042:  js     0842618a <+0x15c>
08426076 +0x048:  sub    $0x2,%eax
08426079 +0x04b:  cmp    $0x1,%eax
0842607c +0x04e:  ja     0842618a <+0x15c>
08426082 +0x054:  jmp    084260f4 <+0xc6>
08426084 +0x056:  mov    -0xc(%ebp),%eax
08426087 +0x059:  mov    0x4(%eax),%eax
0842608a +0x05c:  mov    %eax,0x8(%esp)
0842608e +0x060:  movl   $"deLete from letter where letter_id = %d",0x4(%esp)
08426096 +0x068:  mov    -0x10(%ebp),%eax
08426099 +0x06b:  mov    %eax,(%esp)
0842609c +0x06e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084260a1 +0x073:  movl   $0x1,0x4(%esp)
084260a9 +0x07b:  mov    -0x10(%ebp),%eax
084260ac +0x07e:  mov    %eax,(%esp)
084260af +0x081:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084260b4 +0x086:  xor    $0x1,%eax
084260b7 +0x089:  test   %al,%al
084260b9 +0x08b:  je     084261bc <+0x18e>
084260bf +0x091:  mov    -0xc(%ebp),%eax
084260c2 +0x094:  mov    (%eax),%eax
084260c4 +0x096:  movl   $0x0,0x10(%esp)
084260cc +0x09e:  movl   $0x0,0xc(%esp)
084260d4 +0x0a6:  mov    %eax,0x8(%esp)
084260d8 +0x0aa:  mov    0x10(%ebp),%eax
084260db +0x0ad:  mov    %eax,0x4(%esp)
084260df +0x0b1:  mov    0xc(%ebp),%eax
084260e2 +0x0b4:  mov    %eax,(%esp)
084260e5 +0x0b7:  call   084261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>  ; DB_ChangeLetterStat::makeRequest(int, int, int, int, int)
084260ea +0x0bc:  mov    $0x0,%eax
084260ef +0x0c1:  jmp    084261fa <+0x1cc>
084260f4 +0x0c6:  mov    -0xc(%ebp),%eax
084260f7 +0x0c9:  mov    0x4(%eax),%edx
084260fa +0x0cc:  mov    -0xc(%ebp),%eax
084260fd +0x0cf:  movzwl 0x8(%eax),%eax
08426101 +0x0d3:  cwtl
08426102 +0x0d4:  mov    %edx,0xc(%esp)
08426106 +0x0d8:  mov    %eax,0x8(%esp)
0842610a +0x0dc:  movl   $"upDate letter set stat=%d where letter_id=%d",0x4(%esp)
08426112 +0x0e4:  mov    -0x10(%ebp),%eax
08426115 +0x0e7:  mov    %eax,(%esp)
08426118 +0x0ea:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842611d +0x0ef:  movl   $0x1,0x4(%esp)
08426125 +0x0f7:  mov    -0x10(%ebp),%eax
08426128 +0x0fa:  mov    %eax,(%esp)
0842612b +0x0fd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08426130 +0x102:  xor    $0x1,%eax
08426133 +0x105:  test   %al,%al
08426135 +0x107:  jne    08426148 <+0x11a>
08426137 +0x109:  mov    -0x10(%ebp),%eax
0842613a +0x10c:  mov    %eax,(%esp)
0842613d +0x10f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08426142 +0x114:  or     %edx,%eax
08426144 +0x116:  test   %eax,%eax
08426146 +0x118:  jne    0842614f <+0x121>
08426148 +0x11a:  mov    $0x1,%eax
0842614d +0x11f:  jmp    08426154 <+0x126>
0842614f +0x121:  mov    $0x0,%eax
08426154 +0x126:  test   %al,%al
08426156 +0x128:  je     084261bf <+0x191>
08426158 +0x12a:  mov    -0xc(%ebp),%eax
0842615b +0x12d:  mov    (%eax),%eax
0842615d +0x12f:  movl   $0x0,0x10(%esp)
08426165 +0x137:  movl   $0x0,0xc(%esp)
0842616d +0x13f:  mov    %eax,0x8(%esp)
08426171 +0x143:  mov    0x10(%ebp),%eax
08426174 +0x146:  mov    %eax,0x4(%esp)
08426178 +0x14a:  mov    0xc(%ebp),%eax
0842617b +0x14d:  mov    %eax,(%esp)
0842617e +0x150:  call   084261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>  ; DB_ChangeLetterStat::makeRequest(int, int, int, int, int)
08426183 +0x155:  mov    $0x0,%eax
08426188 +0x15a:  jmp    084261fa <+0x1cc>
0842618a +0x15c:  mov    -0xc(%ebp),%eax
0842618d +0x15f:  mov    (%eax),%eax
0842618f +0x161:  movl   $0x0,0x10(%esp)
08426197 +0x169:  movl   $0x0,0xc(%esp)
0842619f +0x171:  mov    %eax,0x8(%esp)
084261a3 +0x175:  mov    0x10(%ebp),%eax
084261a6 +0x178:  mov    %eax,0x4(%esp)
084261aa +0x17c:  mov    0xc(%ebp),%eax
084261ad +0x17f:  mov    %eax,(%esp)
084261b0 +0x182:  call   084261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>  ; DB_ChangeLetterStat::makeRequest(int, int, int, int, int)
084261b5 +0x187:  mov    $0x0,%eax
084261ba +0x18c:  jmp    084261fa <+0x1cc>
084261bc +0x18e:  nop
084261bd +0x18f:  jmp    084261c0 <+0x192>
084261bf +0x191:  nop
084261c0 +0x192:  mov    -0xc(%ebp),%eax
084261c3 +0x195:  movzwl 0x8(%eax),%eax
084261c7 +0x199:  movswl %ax,%ecx
084261ca +0x19c:  mov    -0xc(%ebp),%eax
084261cd +0x19f:  mov    0x4(%eax),%eax
084261d0 +0x1a2:  mov    %eax,%edx
084261d2 +0x1a4:  mov    -0xc(%ebp),%eax
084261d5 +0x1a7:  mov    (%eax),%eax
084261d7 +0x1a9:  mov    %ecx,0x10(%esp)
084261db +0x1ad:  mov    %edx,0xc(%esp)
084261df +0x1b1:  mov    %eax,0x8(%esp)
084261e3 +0x1b5:  mov    0x10(%ebp),%eax
084261e6 +0x1b8:  mov    %eax,0x4(%esp)
084261ea +0x1bc:  mov    0xc(%ebp),%eax
084261ed +0x1bf:  mov    %eax,(%esp)
084261f0 +0x1c2:  call   084261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>  ; DB_ChangeLetterStat::makeRequest(int, int, int, int, int)
084261f5 +0x1c7:  mov    $0x1,%eax
084261fa +0x1cc:  leave
084261fb +0x1cd:  ret
```

## 反编译 C

```c
// DB_ChangeLetterStat::dispatch @ 0x842602e

/* DB_ChangeLetterStat::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ChangeLetterStat::dispatch(DB_ChangeLetterStat *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  SIG_LETTER_STAT *pSVar3;
  int iVar4;
  longlong lVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar3 = Stream::GetOutBuffer<SIG_LETTER_STAT>(param_3);
  iVar4 = (int)*(short *)(pSVar3 + 8);
  if (iVar4 == 0) {
    MySQL::set_query(this_00,"deLete from letter where letter_id = %d",*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
  }
  else {
    if ((iVar4 < 0) || (1 < iVar4 - 2U)) {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
    MySQL::set_query(this_00,"upDate letter set stat=%d where letter_id=%d",
                     (int)*(short *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this_00,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this_00), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
  }
  makeRequest(param_1,param_2,*(int *)pSVar3,*(int *)(pSVar3 + 4),(int)*(short *)(pSVar3 + 8));
  return 1;
}
```
