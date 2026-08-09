# QueryGuildCreate 重构笔记（2026-08-09，待继续）

原版：`_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_`
（0x080797c2，710 条；完整反汇编见 /tmp/qguildcreate.txt，重启后需重新导出）

## 签名与句柄
- `(Packet_DBMW_Request_Guild_Create* req, unsigned int& guildId, unsigned int& result)`
- h = m_handles[8]（guild）、h2 = m_handles[2]（game）、h3 = m_handles[5]（+0x14）
- 开头 `result = 0`

## Packet_DBMW_Request_Guild_Create 布局（packed，继承 PacketHeader）
- +0xa serverId(byte)、+0xb characNo(int)、+0xf m_id(int)、+0x13 characName(串)、
  +0x31 sex(byte)、+0x32 lev(byte)、+0x33 grow_type(byte)、+0x34 job(byte)、
  +0x35 bornYear(串)、+0x38 guildName(串)、+0x4f guildUrl(串)

## 流程
1. set_query(0x4e6b, "seLect member_flag, unix_timestamp(secede_time) from
   guild_member where charac_no = %d and server_id = %d", characNo(+0xf), serverId(+0xa))
   → 失败 log(0x110a)+result=2+return 0；exec 失败 result=2；
   get_n_rows()!=0 时：fetch 失败 result=0x22；get_uint(0,memberFlag) 失败 result=2；
   memberFlag==1 → result=0x20；==2 → get_uint(1,secedeTime)，失败 result 不变 return 0，
   `!isDayTimeOver(secedeTime,3)` → result=0x68
2. 名字检查：characName[0]==0 || guildName[0]==0 时 result=2；
   characName[0]==0 → log(0x114f, "./log/TraceGuildErr", "CharacName NULL") 后继续；
   否则（guildName 空）→ log(0x1151, "GuildName NULL") + return 0
3. set_query(0x4e6c, "inSert into guild_info set server_id=%d,guild_name='%s',
   master_id=%s,master_no=%d,master_name='%s',guild_url='%s',create_time=now(),member_count=1",
   serverId, guildName(+0x38), NumberToString(characNo(+0xb),0), m_id(+0xf),
   characName(+0x13), url(+0x4f)) → exec 失败 result=2
4. guildId = GetIdentity(h)（新依赖：set_query(0x4e5d,"seLect @@identity")→exec→fetch→get_uint）
5. url：`StackBuffer<char,0x20> buf; sformat(buf, "%s%d", "url", guildId);`
   （sformat 实参顺序 (buf, fmt="%s%d", "url", guildId)，0x81b252b="%s%d"、
   0x81b2527="url"）；再 `std::string url = (char*)buf`（allocator 在 -0x31）
6. set_query(0x4f5f, "upDate guild_info set guild_url='%s' where guild_id=%d",
   url.c_str(), guildId) → exec 成功且 getAffectedRowCount()==0 时 result=2（返回 0）
7. set_query(0x4e6d, "upDate guild_member set guild_id=%d,m_id=%s,charac_name='%s',
   grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,apply_time=now(),
   member_time=now(),member_flag=1 where charac_no=%d and server_id=",
   guildId, NumberToString(characNo,0), characName(+0x13), job(+0x34), grow(+0x33),
   lev(+0x32), bornYear(+0x35), sex(+0x31), characNo(+0xf), serverId(+0xa)) →
   exec 失败且 affected==0 → result=2 return 0
8. set_query(0x4e6e, "inSert into guild_member set guild_id=%d,charac_no=%d,m_id=%s,
   server_id=%d,charac_name='%s',grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',
   sex=%d,...", guildId, m_id(+0xf), NumberToString(characNo(+0xb),0), serverId(+0xa),
   characName(+0x13), job(+0x34), bornYear(+0x35), grow(+0x33), lev(+0x32), sex(+0x31))
   → exec 失败 result=2 return 0（注意 4e6e 无 affected 检查）
9. set_query(0x4e6f, "inSert into guild_introduce set guild_id=%d,server_id=%d",
   guildId, serverId(+0xa)) → exec 失败 result=2
10. set_query(0x4e70, "inSert into guild_member_introduce set guild_id=%d,charac_no=%d",
    guildId, m_id(+0xf)) → exec 失败 result=2
11. set_query(0x4e71, "inSert into guild_visit set guild_id=%d,server_id=%d,
    total_visit=0, today_visit=0", guildId, serverId(+0xa)) → exec 失败 result=2
12. set_query(0x4e72, "inSert into guild_skill set guild_id=%d", guildId) →
    exec 失败 result=2
13. set_query(0x4e73, "upDate charac_info set guild_id=%d where m_id=%s and charac_no=%d",
    guildId, NumberToString(m_id(+0xb),0), characNo(+0xf))（h2）→ exec 失败 result=2
14. 成功：`result 不变（0）`，return 1（ebx=1 经 std::string url 析构后返回）
    （修正：4f5f/4e6d 失败分支为 `if (!exec || getAffectedRowCount()==0) result=2;`
    exec 失败短路不调 affected；4e6e..4e73 失败仅 result=2 并继续/返回 1）

## 依赖（已实现 2026-08-09）
- `sformat(const char*, ...)` 返回 StackBuffer_char（0x0818e958，117 条）：
  先 vsnprintf 到 0x200 局部，<=0x1ff 则 alloc+copy；否则 vsnprintf(NULL,0) 量长、
  StackBuffer_char alloc 再直写；`ret $0x4`
- StackBuffer 基类（+0 m_buf、+4 m_end）+ StackBuffer_char/StackBuffer_wchar
  （+8 m_data）：TLS StackBufferContext（vector<Buffer>+vector<uchar*>+idx+offset）
  + 0x4000 块池；alloc/getBuffer/cv/拷贝构造（偷取）/operator=/freeAll 已实现
- 已实现：GetIdentity（CDBManager）、isDayTimeOver
