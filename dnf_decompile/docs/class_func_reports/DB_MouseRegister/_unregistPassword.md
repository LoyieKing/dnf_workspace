# _unregistPassword

`_ZN16DB_MouseRegister17_unregistPasswordEjPc`

`DB_MouseRegister::_unregistPassword(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08423794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423794  _ZN16DB_MouseRegister17_unregistPasswordEjPc
#           DB_MouseRegister::_unregistPassword(unsigned int, char*)
# range [0x08423794, 0x08423913]
08423794 +0x000:  push   %ebp
08423795 +0x001:  mov    %esp,%ebp
08423797 +0x003:  sub    $0x28,%esp
0842379a +0x006:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
0842379f +0x00b:  mov    %eax,-0x10(%ebp)
084237a2 +0x00e:  mov    0x10(%ebp),%eax
084237a5 +0x011:  mov    %eax,0x8(%esp)
084237a9 +0x015:  movl   $0xa,0x4(%esp)
084237b1 +0x01d:  mov    0xc(%ebp),%eax
084237b4 +0x020:  mov    %eax,(%esp)
084237b7 +0x023:  call   08423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>  ; DB_MouseRegister::_updateHistory(unsigned int, int, char*)
084237bc +0x028:  xor    $0x1,%eax
084237bf +0x02b:  test   %al,%al
084237c1 +0x02d:  je     084237cd <+0x39>
084237c3 +0x02f:  mov    $0x15,%eax
084237c8 +0x034:  jmp    08423911 <+0x17d>
084237cd +0x039:  movl   $0x0,0x4(%esp)
084237d5 +0x041:  mov    0xc(%ebp),%eax
084237d8 +0x044:  mov    %eax,(%esp)
084237db +0x047:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084237e0 +0x04c:  mov    %eax,0x8(%esp)
084237e4 +0x050:  movl   $"deLete from member_mousepass where m_id=%s",0x4(%esp)
084237ec +0x058:  mov    -0x10(%ebp),%eax
084237ef +0x05b:  mov    %eax,(%esp)
084237f2 +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084237f7 +0x063:  movl   $0x1,0x4(%esp)
084237ff +0x06b:  mov    -0x10(%ebp),%eax
08423802 +0x06e:  mov    %eax,(%esp)
08423805 +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842380a +0x076:  xor    $0x1,%eax
0842380d +0x079:  test   %al,%al
0842380f +0x07b:  jne    08423822 <+0x8e>
08423811 +0x07d:  mov    -0x10(%ebp),%eax
08423814 +0x080:  mov    %eax,(%esp)
08423817 +0x083:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842381c +0x088:  or     %edx,%eax
0842381e +0x08a:  test   %eax,%eax
08423820 +0x08c:  jne    08423829 <+0x95>
08423822 +0x08e:  mov    $0x1,%eax
08423827 +0x093:  jmp    0842382e <+0x9a>
08423829 +0x095:  mov    $0x0,%eax
0842382e +0x09a:  test   %al,%al
08423830 +0x09c:  je     0842383c <+0xa8>
08423832 +0x09e:  mov    $0x15,%eax
08423837 +0x0a3:  jmp    08423911 <+0x17d>
0842383c +0x0a8:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08423841 +0x0ad:  movl   $0x0,0x8(%esp)
08423849 +0x0b5:  movl   $0x1,0x4(%esp)
08423851 +0x0bd:  mov    %eax,(%esp)
08423854 +0x0c0:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423859 +0x0c5:  mov    %eax,-0xc(%ebp)
0842385c +0x0c8:  movl   $0x0,0x4(%esp)
08423864 +0x0d0:  mov    0xc(%ebp),%eax
08423867 +0x0d3:  mov    %eax,(%esp)
0842386a +0x0d6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842386f +0x0db:  mov    %eax,0x8(%esp)
08423873 +0x0df:  movl   $"upDate member_security_grade set goblin_pass_mod='0000-00-00 00:00:00' where m_id=%s",0x4(%esp)
0842387b +0x0e7:  mov    -0xc(%ebp),%eax
0842387e +0x0ea:  mov    %eax,(%esp)
08423881 +0x0ed:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423886 +0x0f2:  movl   $0x1,0x4(%esp)
0842388e +0x0fa:  mov    -0xc(%ebp),%eax
08423891 +0x0fd:  mov    %eax,(%esp)
08423894 +0x100:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423899 +0x105:  xor    $0x1,%eax
0842389c +0x108:  test   %al,%al
0842389e +0x10a:  jne    084238b1 <+0x11d>
084238a0 +0x10c:  mov    -0xc(%ebp),%eax
084238a3 +0x10f:  mov    %eax,(%esp)
084238a6 +0x112:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084238ab +0x117:  or     %edx,%eax
084238ad +0x119:  test   %eax,%eax
084238af +0x11b:  jne    084238b8 <+0x124>
084238b1 +0x11d:  mov    $0x1,%eax
084238b6 +0x122:  jmp    084238bd <+0x129>
084238b8 +0x124:  mov    $0x0,%eax
084238bd +0x129:  test   %al,%al
084238bf +0x12b:  je     0842390c <+0x178>
084238c1 +0x12d:  movl   $0x0,0x4(%esp)
084238c9 +0x135:  mov    0xc(%ebp),%eax
084238cc +0x138:  mov    %eax,(%esp)
084238cf +0x13b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084238d4 +0x140:  mov    %eax,0x8(%esp)
084238d8 +0x144:  movl   $"inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, '0000-00-00 00:00:00')",0x4(%esp)
084238e0 +0x14c:  mov    -0xc(%ebp),%eax
084238e3 +0x14f:  mov    %eax,(%esp)
084238e6 +0x152:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084238eb +0x157:  movl   $0x1,0x4(%esp)
084238f3 +0x15f:  mov    -0xc(%ebp),%eax
084238f6 +0x162:  mov    %eax,(%esp)
084238f9 +0x165:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084238fe +0x16a:  xor    $0x1,%eax
08423901 +0x16d:  test   %al,%al
08423903 +0x16f:  je     0842390c <+0x178>
08423905 +0x171:  mov    $0x0,%eax
0842390a +0x176:  jmp    08423911 <+0x17d>
0842390c +0x178:  mov    $0x0,%eax
08423911 +0x17d:  leave
08423912 +0x17e:  ret
08423913 +0x17f:  nop
```

## 反编译 C

```c
// DB_MouseRegister::_unregistPassword @ 0x8423794

/* DB_MouseRegister::_unregistPassword(unsigned int, char*) */

undefined4 __thiscall
DB_MouseRegister::_unregistPassword(DB_MouseRegister *this,uint param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  pMVar3 = (MySQL *)_getDBHandleForDevideAccountDB();
  cVar2 = _updateHistory(param_1,10,param_2);
  if (cVar2 != '\x01') {
    return 0x15;
  }
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(pMVar3,"deLete from member_mousepass where m_id=%s",uVar4);
  cVar2 = MySQL::exec(pMVar3,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(pMVar3), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "upDate member_security_grade set goblin_pass_mod=\'0000-00-00 00:00:00\' where m_id=%s"
                     ,uVar4);
    cVar2 = MySQL::exec(pMVar3,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(pMVar3), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(pMVar3,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, \'0000-00-00 00:00:00\')"
                       ,uVar4);
      cVar2 = MySQL::exec(pMVar3,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 0;
  }
  return 0x15;
}
```
