# dispatch

`_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream`

`DB_UpdateComboSkill::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateComboSkill` | `0x0844a8ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a8ea  _ZN19DB_UpdateComboSkill8dispatchEiiP6Stream
#           DB_UpdateComboSkill::dispatch(int, int, Stream*)
# range [0x0844a8ea, 0x0844aa4b]
0844a8ea +0x000:  push   %ebp
0844a8eb +0x001:  mov    %esp,%ebp
0844a8ed +0x003:  push   %ebx
0844a8ee +0x004:  sub    $0x54,%esp
0844a8f1 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844a8f6 +0x00c:  movl   $0x0,0x8(%esp)
0844a8fe +0x014:  movl   $0x3,0x4(%esp)
0844a906 +0x01c:  mov    %eax,(%esp)
0844a909 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844a90e +0x024:  mov    %eax,-0x10(%ebp)
0844a911 +0x027:  cmpl   $0x0,-0x10(%ebp)
0844a915 +0x02b:  jne    0844a921 <+0x37>
0844a917 +0x02d:  mov    $0x0,%eax
0844a91c +0x032:  jmp    0844aa46 <+0x15c>
0844a921 +0x037:  mov    0x14(%ebp),%eax
0844a924 +0x03a:  mov    %eax,(%esp)
0844a927 +0x03d:  call   0845474e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7364>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7364
0844a92c +0x042:  mov    %eax,-0xc(%ebp)
0844a92f +0x045:  cmpl   $0x0,-0xc(%ebp)
0844a933 +0x049:  jne    0844a93f <+0x55>
0844a935 +0x04b:  mov    $0x0,%eax
0844a93a +0x050:  jmp    0844aa46 <+0x15c>
0844a93f +0x055:  mov    -0xc(%ebp),%eax
0844a942 +0x058:  lea    0xa(%eax),%ecx
0844a945 +0x05b:  mov    -0xc(%ebp),%eax
0844a948 +0x05e:  movzbl 0x4(%eax),%eax
0844a94c +0x062:  movzbl %al,%edx
0844a94f +0x065:  mov    -0xc(%ebp),%eax
0844a952 +0x068:  mov    (%eax),%eax
0844a954 +0x06a:  movl   $0x0,0x14(%esp)
0844a95c +0x072:  mov    %ecx,0x10(%esp)
0844a960 +0x076:  mov    %edx,0xc(%esp)
0844a964 +0x07a:  mov    %eax,0x8(%esp)
0844a968 +0x07e:  mov    -0x10(%ebp),%eax
0844a96b +0x081:  mov    %eax,0x4(%esp)
0844a96f +0x085:  mov    0x8(%ebp),%eax
0844a972 +0x088:  mov    %eax,(%esp)
0844a975 +0x08b:  call   0844aa4c <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)
0844a97a +0x090:  xor    $0x1,%eax
0844a97d +0x093:  test   %al,%al
0844a97f +0x095:  je     0844a9c0 <+0xd6>
0844a981 +0x097:  mov    -0xc(%ebp),%eax
0844a984 +0x09a:  mov    (%eax),%ebx
0844a986 +0x09c:  movl   $0x5,0xc(%esp)
0844a98e +0x0a4:  movl   $0xbb2c,0x8(%esp)
0844a996 +0x0ac:  movl   $&_ZZN19DB_UpdateComboSkill8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844a99e +0x0b4:  lea    -0x30(%ebp),%eax
0844a9a1 +0x0b7:  mov    %eax,(%esp)
0844a9a4 +0x0ba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a9a9 +0x0bf:  mov    %ebx,0x8(%esp)
0844a9ad +0x0c3:  movl   $"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",0x4(%esp)
0844a9b5 +0x0cb:  lea    -0x30(%ebp),%eax
0844a9b8 +0x0ce:  mov    %eax,(%esp)
0844a9bb +0x0d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a9c0 +0x0d6:  mov    -0xc(%ebp),%eax
0844a9c3 +0x0d9:  lea    0x5e(%eax),%ecx
0844a9c6 +0x0dc:  mov    -0xc(%ebp),%eax
0844a9c9 +0x0df:  movzbl 0x5(%eax),%eax
0844a9cd +0x0e3:  movzbl %al,%edx
0844a9d0 +0x0e6:  mov    -0xc(%ebp),%eax
0844a9d3 +0x0e9:  mov    (%eax),%eax
0844a9d5 +0x0eb:  movl   $0x1,0x14(%esp)
0844a9dd +0x0f3:  mov    %ecx,0x10(%esp)
0844a9e1 +0x0f7:  mov    %edx,0xc(%esp)
0844a9e5 +0x0fb:  mov    %eax,0x8(%esp)
0844a9e9 +0x0ff:  mov    -0x10(%ebp),%eax
0844a9ec +0x102:  mov    %eax,0x4(%esp)
0844a9f0 +0x106:  mov    0x8(%ebp),%eax
0844a9f3 +0x109:  mov    %eax,(%esp)
0844a9f6 +0x10c:  call   0844aa4c <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)
0844a9fb +0x111:  xor    $0x1,%eax
0844a9fe +0x114:  test   %al,%al
0844aa00 +0x116:  je     0844aa41 <+0x157>
0844aa02 +0x118:  mov    -0xc(%ebp),%eax
0844aa05 +0x11b:  mov    (%eax),%ebx
0844aa07 +0x11d:  movl   $0x5,0xc(%esp)
0844aa0f +0x125:  movl   $0xbb33,0x8(%esp)
0844aa17 +0x12d:  movl   $&_ZZN19DB_UpdateComboSkill8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844aa1f +0x135:  lea    -0x20(%ebp),%eax
0844aa22 +0x138:  mov    %eax,(%esp)
0844aa25 +0x13b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844aa2a +0x140:  mov    %ebx,0x8(%esp)
0844aa2e +0x144:  movl   $"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",0x4(%esp)
0844aa36 +0x14c:  lea    -0x20(%ebp),%eax
0844aa39 +0x14f:  mov    %eax,(%esp)
0844aa3c +0x152:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844aa41 +0x157:  mov    $0x1,%eax
0844aa46 +0x15c:  add    $0x54,%esp
0844aa49 +0x15f:  pop    %ebx
0844aa4a +0x160:  pop    %ebp
0844aa4b +0x161:  ret
```

## 反编译 C

```c
// DB_UpdateComboSkill::dispatch @ 0x844a8ea

/* DB_UpdateComboSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateComboSkill::dispatch(DB_UpdateComboSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  SIG_COMBO_SKILL *local_10;
  
  local_14 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = Stream::GetOutBuffer<SIG_COMBO_SKILL>(param_3);
    if (local_10 == (SIG_COMBO_SKILL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = setComboSkill(this,local_14,*(undefined4 *)local_10,local_10[4],local_10 + 10,0);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_10;
        cMyTrace::cMyTrace(local_34,"virtual bool DB_UpdateComboSkill::dispatch(int, int, Stream*)",
                           0xbb2c,5);
        cMyTrace::operator()
                  (local_34,"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",uVar2)
        ;
      }
      cVar1 = setComboSkill(this,local_14,*(undefined4 *)local_10,local_10[5],local_10 + 0x5e,1);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_10;
        cMyTrace::cMyTrace(local_24,"virtual bool DB_UpdateComboSkill::dispatch(int, int, Stream*)",
                           0xbb33,5);
        cMyTrace::operator()
                  (local_24,"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",uVar2)
        ;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
