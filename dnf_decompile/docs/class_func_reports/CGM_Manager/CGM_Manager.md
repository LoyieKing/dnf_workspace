# CGM_Manager

`_ZN11CGM_ManagerC1Ev`

`CGM_Manager::CGM_Manager()`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x082990d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082990d0  _ZN11CGM_ManagerC1Ev
#           CGM_Manager::CGM_Manager()
# range [0x082990d0, 0x08299159]
082990d0 +0x00:  push   %ebp
082990d1 +0x01:  mov    %esp,%ebp
082990d3 +0x03:  push   %esi
082990d4 +0x04:  push   %ebx
082990d5 +0x05:  sub    $0x10,%esp
082990d8 +0x08:  mov    0x8(%ebp),%eax
082990db +0x0b:  mov    %eax,(%esp)
082990de +0x0e:  call   082b2cc2 <_GLOBAL__I__ZN4CLog5this_E+0xf0e9>  ; global constructors keyed to CLog::this_+0xf0e9
082990e3 +0x13:  mov    0x8(%ebp),%eax
082990e6 +0x16:  add    $0x1c,%eax
082990e9 +0x19:  mov    %eax,(%esp)
082990ec +0x1c:  call   082a3c48 <_GLOBAL__I__ZN4CLog5this_E+0x6f>  ; global constructors keyed to CLog::this_+0x6f
082990f1 +0x21:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
082990f6 +0x26:  movl   $0x0,0x8(%esp)
082990fe +0x2e:  movl   $0x6,0x4(%esp)
08299106 +0x36:  mov    %eax,(%esp)
08299109 +0x39:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0829910e +0x3e:  mov    0x8(%ebp),%edx
08299111 +0x41:  mov    %eax,0x18(%edx)
08299114 +0x44:  mov    0x8(%ebp),%eax
08299117 +0x47:  mov    %eax,(%esp)
0829911a +0x4a:  call   08299530 <_ZN11CGM_Manager16LoadGmListFromDbEv>  ; CGM_Manager::LoadGmListFromDb()
0829911f +0x4f:  jmp    08299152 <+0x82>
08299121 +0x51:  mov    %edx,%ebx
08299123 +0x53:  mov    %eax,%esi
08299125 +0x55:  mov    0x8(%ebp),%eax
08299128 +0x58:  add    $0x1c,%eax
0829912b +0x5b:  mov    %eax,(%esp)
0829912e +0x5e:  call   082a3c64 <_GLOBAL__I__ZN4CLog5this_E+0x8b>  ; global constructors keyed to CLog::this_+0x8b
08299133 +0x63:  mov    %esi,%eax
08299135 +0x65:  mov    %ebx,%edx
08299137 +0x67:  mov    %edx,%ebx
08299139 +0x69:  mov    %eax,%esi
0829913b +0x6b:  mov    0x8(%ebp),%eax
0829913e +0x6e:  mov    %eax,(%esp)
08299141 +0x71:  call   082aa826 <_GLOBAL__I__ZN4CLog5this_E+0x6c4d>  ; global constructors keyed to CLog::this_+0x6c4d
08299146 +0x76:  mov    %esi,%eax
08299148 +0x78:  mov    %ebx,%edx
0829914a +0x7a:  mov    %eax,(%esp)
0829914d +0x7d:  call   08ae3750 <_Unwind_Resume>
08299152 +0x82:  add    $0x10,%esp
08299155 +0x85:  pop    %ebx
08299156 +0x86:  pop    %esi
08299157 +0x87:  pop    %ebp
08299158 +0x88:  ret
08299159 +0x89:  nop
```

## 反编译 C

```c
// CGM_Manager::CGM_Manager @ 0x82990d0

/* CGM_Manager::CGM_Manager() */

void __thiscall CGM_Manager::CGM_Manager(CGM_Manager *this)

{
  undefined4 uVar1;
  
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::map((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
         *)this);
  rwLock::rwLock((rwLock *)(this + 0x1c));
                    /* try { // try from 08299109 to 0829911e has its CatchHandler @ 08299121 */
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  *(undefined4 *)(this + 0x18) = uVar1;
  LoadGmListFromDb(this);
  return;
}
```
