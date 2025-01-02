// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MAXCOMPUTE20220104_H_
#define ALIBABACLOUD_MAXCOMPUTE20220104_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MaxCompute20220104 {
class ApplyComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ApplyComputeQuotaPlanResponseBody() {}

  explicit ApplyComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ApplyComputeQuotaPlanResponseBody() = default;
};
class ApplyComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyComputeQuotaPlanResponseBody> body{};

  ApplyComputeQuotaPlanResponse() {}

  explicit ApplyComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyComputeQuotaPlanResponse() = default;
};
class CreateComputeQuotaPlanRequestQuotaParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};

  CreateComputeQuotaPlanRequestQuotaParameter() {}

  explicit CreateComputeQuotaPlanRequestQuotaParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
  }


  virtual ~CreateComputeQuotaPlanRequestQuotaParameter() = default;
};
class CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};
  shared_ptr<long> maxCU{};
  shared_ptr<long> minCU{};

  CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() {}

  explicit CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    if (maxCU) {
      res["maxCU"] = boost::any(*maxCU);
    }
    if (minCU) {
      res["minCU"] = boost::any(*minCU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
    if (m.find("maxCU") != m.end() && !m["maxCU"].empty()) {
      maxCU = make_shared<long>(boost::any_cast<long>(m["maxCU"]));
    }
    if (m.find("minCU") != m.end() && !m["minCU"].empty()) {
      minCU = make_shared<long>(boost::any_cast<long>(m["minCU"]));
    }
  }


  virtual ~CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() = default;
};
class CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter> parameter{};

  CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList() {}

  explicit CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter>(model1);
      }
    }
  }


  virtual ~CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default;
};
class CreateComputeQuotaPlanRequestQuota : public Darabonba::Model {
public:
  shared_ptr<CreateComputeQuotaPlanRequestQuotaParameter> parameter{};
  shared_ptr<vector<CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList>> subQuotaInfoList{};

  CreateComputeQuotaPlanRequestQuota() {}

  explicit CreateComputeQuotaPlanRequestQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateComputeQuotaPlanRequestQuotaParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateComputeQuotaPlanRequestQuotaParameter>(model1);
      }
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList>>(expect1);
      }
    }
  }


  virtual ~CreateComputeQuotaPlanRequestQuota() = default;
};
class CreateComputeQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<CreateComputeQuotaPlanRequestQuota> quota{};

  CreateComputeQuotaPlanRequest() {}

  explicit CreateComputeQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        CreateComputeQuotaPlanRequestQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<CreateComputeQuotaPlanRequestQuota>(model1);
      }
    }
  }


  virtual ~CreateComputeQuotaPlanRequest() = default;
};
class CreateComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  CreateComputeQuotaPlanResponseBody() {}

  explicit CreateComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateComputeQuotaPlanResponseBody() = default;
};
class CreateComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateComputeQuotaPlanResponseBody> body{};

  CreateComputeQuotaPlanResponse() {}

  explicit CreateComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateComputeQuotaPlanResponse() = default;
};
class CreateMmsDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<string> name{};
  shared_ptr<string> networklink{};
  shared_ptr<string> type{};

  CreateMmsDataSourceRequest() {}

  explicit CreateMmsDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networklink) {
      res["networklink"] = boost::any(*networklink);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networklink") != m.end() && !m["networklink"].empty()) {
      networklink = make_shared<string>(boost::any_cast<string>(m["networklink"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateMmsDataSourceRequest() = default;
};
class CreateMmsDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> dataSourceId{};

  CreateMmsDataSourceResponseBodyData() {}

  explicit CreateMmsDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<long>(boost::any_cast<long>(m["dataSourceId"]));
    }
  }


  virtual ~CreateMmsDataSourceResponseBodyData() = default;
};
class CreateMmsDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateMmsDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateMmsDataSourceResponseBody() {}

  explicit CreateMmsDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateMmsDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateMmsDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateMmsDataSourceResponseBody() = default;
};
class CreateMmsDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMmsDataSourceResponseBody> body{};

  CreateMmsDataSourceResponse() {}

  explicit CreateMmsDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMmsDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMmsDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMmsDataSourceResponse() = default;
};
class CreateMmsFetchMetadataJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> scanId{};

  CreateMmsFetchMetadataJobResponseBodyData() {}

  explicit CreateMmsFetchMetadataJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scanId) {
      res["scanId"] = boost::any(*scanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scanId") != m.end() && !m["scanId"].empty()) {
      scanId = make_shared<long>(boost::any_cast<long>(m["scanId"]));
    }
  }


  virtual ~CreateMmsFetchMetadataJobResponseBodyData() = default;
};
class CreateMmsFetchMetadataJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateMmsFetchMetadataJobResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateMmsFetchMetadataJobResponseBody() {}

  explicit CreateMmsFetchMetadataJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateMmsFetchMetadataJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateMmsFetchMetadataJobResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateMmsFetchMetadataJobResponseBody() = default;
};
class CreateMmsFetchMetadataJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMmsFetchMetadataJobResponseBody> body{};

  CreateMmsFetchMetadataJobResponse() {}

  explicit CreateMmsFetchMetadataJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMmsFetchMetadataJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMmsFetchMetadataJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMmsFetchMetadataJobResponse() = default;
};
class CreateMmsJobRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> columnMapping{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstSchemaName{};
  shared_ptr<bool> enableVerification{};
  shared_ptr<bool> increment{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> others{};
  shared_ptr<map<string, string>> partitionFilters{};
  shared_ptr<vector<long>> partitions{};
  shared_ptr<bool> schemaOnly{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcSchemaName{};
  shared_ptr<vector<string>> tableBlackList{};
  shared_ptr<map<string, string>> tableMapping{};
  shared_ptr<vector<string>> tableWhiteList{};
  shared_ptr<vector<string>> tables{};
  shared_ptr<string> taskType{};

  CreateMmsJobRequest() {}

  explicit CreateMmsJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnMapping) {
      res["columnMapping"] = boost::any(*columnMapping);
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstSchemaName) {
      res["dstSchemaName"] = boost::any(*dstSchemaName);
    }
    if (enableVerification) {
      res["enableVerification"] = boost::any(*enableVerification);
    }
    if (increment) {
      res["increment"] = boost::any(*increment);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (others) {
      res["others"] = boost::any(*others);
    }
    if (partitionFilters) {
      res["partitionFilters"] = boost::any(*partitionFilters);
    }
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    if (schemaOnly) {
      res["schemaOnly"] = boost::any(*schemaOnly);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcSchemaName) {
      res["srcSchemaName"] = boost::any(*srcSchemaName);
    }
    if (tableBlackList) {
      res["tableBlackList"] = boost::any(*tableBlackList);
    }
    if (tableMapping) {
      res["tableMapping"] = boost::any(*tableMapping);
    }
    if (tableWhiteList) {
      res["tableWhiteList"] = boost::any(*tableWhiteList);
    }
    if (tables) {
      res["tables"] = boost::any(*tables);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnMapping") != m.end() && !m["columnMapping"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["columnMapping"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      columnMapping = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstSchemaName") != m.end() && !m["dstSchemaName"].empty()) {
      dstSchemaName = make_shared<string>(boost::any_cast<string>(m["dstSchemaName"]));
    }
    if (m.find("enableVerification") != m.end() && !m["enableVerification"].empty()) {
      enableVerification = make_shared<bool>(boost::any_cast<bool>(m["enableVerification"]));
    }
    if (m.find("increment") != m.end() && !m["increment"].empty()) {
      increment = make_shared<bool>(boost::any_cast<bool>(m["increment"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("others") != m.end() && !m["others"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["others"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      others = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("partitionFilters") != m.end() && !m["partitionFilters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["partitionFilters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      partitionFilters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["partitions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["partitions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      partitions = make_shared<vector<long>>(toVec1);
    }
    if (m.find("schemaOnly") != m.end() && !m["schemaOnly"].empty()) {
      schemaOnly = make_shared<bool>(boost::any_cast<bool>(m["schemaOnly"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcSchemaName") != m.end() && !m["srcSchemaName"].empty()) {
      srcSchemaName = make_shared<string>(boost::any_cast<string>(m["srcSchemaName"]));
    }
    if (m.find("tableBlackList") != m.end() && !m["tableBlackList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tableBlackList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tableBlackList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tableMapping") != m.end() && !m["tableMapping"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["tableMapping"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tableMapping = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("tableWhiteList") != m.end() && !m["tableWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tableWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tableWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~CreateMmsJobRequest() = default;
};
class CreateMmsJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> asyncTaskId{};

  CreateMmsJobResponseBodyData() {}

  explicit CreateMmsJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncTaskId) {
      res["asyncTaskId"] = boost::any(*asyncTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncTaskId") != m.end() && !m["asyncTaskId"].empty()) {
      asyncTaskId = make_shared<long>(boost::any_cast<long>(m["asyncTaskId"]));
    }
  }


  virtual ~CreateMmsJobResponseBodyData() = default;
};
class CreateMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateMmsJobResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateMmsJobResponseBody() {}

  explicit CreateMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateMmsJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateMmsJobResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateMmsJobResponseBody() = default;
};
class CreateMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMmsJobResponseBody> body{};

  CreateMmsJobResponse() {}

  explicit CreateMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMmsJobResponse() = default;
};
class CreatePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<bool> isInstall{};

  CreatePackageRequest() {}

  explicit CreatePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (isInstall) {
      res["isInstall"] = boost::any(*isInstall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("isInstall") != m.end() && !m["isInstall"].empty()) {
      isInstall = make_shared<bool>(boost::any_cast<bool>(m["isInstall"]));
    }
  }


  virtual ~CreatePackageRequest() = default;
};
class CreatePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreatePackageResponseBody() {}

  explicit CreatePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePackageResponseBody() = default;
};
class CreatePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePackageResponseBody> body{};

  CreatePackageResponse() {}

  explicit CreatePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePackageResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  CreateQuotaPlanRequest() {}

  explicit CreateQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateQuotaPlanRequest() = default;
};
class CreateQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateQuotaPlanResponseBody() {}

  explicit CreateQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateQuotaPlanResponseBody() = default;
};
class CreateQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaPlanResponseBody> body{};

  CreateQuotaPlanResponse() {}

  explicit CreateQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaPlanResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class DeleteComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  DeleteComputeQuotaPlanResponseBody() {}

  explicit DeleteComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteComputeQuotaPlanResponseBody() = default;
};
class DeleteComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteComputeQuotaPlanResponseBody> body{};

  DeleteComputeQuotaPlanResponse() {}

  explicit DeleteComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteComputeQuotaPlanResponse() = default;
};
class DeleteMmsDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  DeleteMmsDataSourceResponseBody() {}

  explicit DeleteMmsDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteMmsDataSourceResponseBody() = default;
};
class DeleteMmsDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMmsDataSourceResponseBody> body{};

  DeleteMmsDataSourceResponse() {}

  explicit DeleteMmsDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMmsDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMmsDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMmsDataSourceResponse() = default;
};
class DeleteMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  DeleteMmsJobResponseBody() {}

  explicit DeleteMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteMmsJobResponseBody() = default;
};
class DeleteMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMmsJobResponseBody> body{};

  DeleteMmsJobResponse() {}

  explicit DeleteMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMmsJobResponse() = default;
};
class DeleteQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  DeleteQuotaPlanRequest() {}

  explicit DeleteQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~DeleteQuotaPlanRequest() = default;
};
class DeleteQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DeleteQuotaPlanResponseBody() {}

  explicit DeleteQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteQuotaPlanResponseBody() = default;
};
class DeleteQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQuotaPlanResponseBody> body{};

  DeleteQuotaPlanResponse() {}

  explicit DeleteQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQuotaPlanResponse() = default;
};
class GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList() {}

  explicit GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList() = default;
};
class GetComputeEffectivePlanResponseBodyDataQuota : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetComputeEffectivePlanResponseBodyDataQuota() {}

  explicit GetComputeEffectivePlanResponseBodyDataQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetComputeEffectivePlanResponseBodyDataQuota() = default;
};
class GetComputeEffectivePlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> isEffective{};
  shared_ptr<string> name{};
  shared_ptr<GetComputeEffectivePlanResponseBodyDataQuota> quota{};

  GetComputeEffectivePlanResponseBodyData() {}

  explicit GetComputeEffectivePlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (isEffective) {
      res["isEffective"] = boost::any(*isEffective);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("isEffective") != m.end() && !m["isEffective"].empty()) {
      isEffective = make_shared<bool>(boost::any_cast<bool>(m["isEffective"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        GetComputeEffectivePlanResponseBodyDataQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<GetComputeEffectivePlanResponseBodyDataQuota>(model1);
      }
    }
  }


  virtual ~GetComputeEffectivePlanResponseBodyData() = default;
};
class GetComputeEffectivePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetComputeEffectivePlanResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetComputeEffectivePlanResponseBody() {}

  explicit GetComputeEffectivePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetComputeEffectivePlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetComputeEffectivePlanResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetComputeEffectivePlanResponseBody() = default;
};
class GetComputeEffectivePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComputeEffectivePlanResponseBody> body{};

  GetComputeEffectivePlanResponse() {}

  explicit GetComputeEffectivePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetComputeEffectivePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComputeEffectivePlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetComputeEffectivePlanResponse() = default;
};
class GetComputeQuotaPlanResponseBodyDataQuotaParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};
  shared_ptr<long> maxCU{};
  shared_ptr<long> minCU{};

  GetComputeQuotaPlanResponseBodyDataQuotaParameter() {}

  explicit GetComputeQuotaPlanResponseBodyDataQuotaParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    if (maxCU) {
      res["maxCU"] = boost::any(*maxCU);
    }
    if (minCU) {
      res["minCU"] = boost::any(*minCU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
    if (m.find("maxCU") != m.end() && !m["maxCU"].empty()) {
      maxCU = make_shared<long>(boost::any_cast<long>(m["maxCU"]));
    }
    if (m.find("minCU") != m.end() && !m["minCU"].empty()) {
      minCU = make_shared<long>(boost::any_cast<long>(m["minCU"]));
    }
  }


  virtual ~GetComputeQuotaPlanResponseBodyDataQuotaParameter() = default;
};
class GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};
  shared_ptr<bool> enablePriority{};
  shared_ptr<bool> forceReservedMin{};
  shared_ptr<long> maxCU{};
  shared_ptr<long> minCU{};
  shared_ptr<string> schedulerType{};
  shared_ptr<long> singleJobCULimit{};

  GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter() {}

  explicit GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    if (enablePriority) {
      res["enablePriority"] = boost::any(*enablePriority);
    }
    if (forceReservedMin) {
      res["forceReservedMin"] = boost::any(*forceReservedMin);
    }
    if (maxCU) {
      res["maxCU"] = boost::any(*maxCU);
    }
    if (minCU) {
      res["minCU"] = boost::any(*minCU);
    }
    if (schedulerType) {
      res["schedulerType"] = boost::any(*schedulerType);
    }
    if (singleJobCULimit) {
      res["singleJobCULimit"] = boost::any(*singleJobCULimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
    if (m.find("enablePriority") != m.end() && !m["enablePriority"].empty()) {
      enablePriority = make_shared<bool>(boost::any_cast<bool>(m["enablePriority"]));
    }
    if (m.find("forceReservedMin") != m.end() && !m["forceReservedMin"].empty()) {
      forceReservedMin = make_shared<bool>(boost::any_cast<bool>(m["forceReservedMin"]));
    }
    if (m.find("maxCU") != m.end() && !m["maxCU"].empty()) {
      maxCU = make_shared<long>(boost::any_cast<long>(m["maxCU"]));
    }
    if (m.find("minCU") != m.end() && !m["minCU"].empty()) {
      minCU = make_shared<long>(boost::any_cast<long>(m["minCU"]));
    }
    if (m.find("schedulerType") != m.end() && !m["schedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["schedulerType"]));
    }
    if (m.find("singleJobCULimit") != m.end() && !m["singleJobCULimit"].empty()) {
      singleJobCULimit = make_shared<long>(boost::any_cast<long>(m["singleJobCULimit"]));
    }
  }


  virtual ~GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter() = default;
};
class GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() {}

  explicit GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoListParameter>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() = default;
};
class GetComputeQuotaPlanResponseBodyDataQuota : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<GetComputeQuotaPlanResponseBodyDataQuotaParameter> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetComputeQuotaPlanResponseBodyDataQuota() {}

  explicit GetComputeQuotaPlanResponseBodyDataQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        GetComputeQuotaPlanResponseBodyDataQuotaParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<GetComputeQuotaPlanResponseBodyDataQuotaParameter>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetComputeQuotaPlanResponseBodyDataQuota() = default;
};
class GetComputeQuotaPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> isEffective{};
  shared_ptr<string> name{};
  shared_ptr<GetComputeQuotaPlanResponseBodyDataQuota> quota{};

  GetComputeQuotaPlanResponseBodyData() {}

  explicit GetComputeQuotaPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (isEffective) {
      res["isEffective"] = boost::any(*isEffective);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("isEffective") != m.end() && !m["isEffective"].empty()) {
      isEffective = make_shared<bool>(boost::any_cast<bool>(m["isEffective"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        GetComputeQuotaPlanResponseBodyDataQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<GetComputeQuotaPlanResponseBodyDataQuota>(model1);
      }
    }
  }


  virtual ~GetComputeQuotaPlanResponseBodyData() = default;
};
class GetComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetComputeQuotaPlanResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetComputeQuotaPlanResponseBody() {}

  explicit GetComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetComputeQuotaPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetComputeQuotaPlanResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetComputeQuotaPlanResponseBody() = default;
};
class GetComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComputeQuotaPlanResponseBody> body{};

  GetComputeQuotaPlanResponse() {}

  explicit GetComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetComputeQuotaPlanResponse() = default;
};
class GetComputeQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayTimezone{};

  GetComputeQuotaScheduleRequest() {}

  explicit GetComputeQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayTimezone) {
      res["displayTimezone"] = boost::any(*displayTimezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayTimezone") != m.end() && !m["displayTimezone"].empty()) {
      displayTimezone = make_shared<string>(boost::any_cast<string>(m["displayTimezone"]));
    }
  }


  virtual ~GetComputeQuotaScheduleRequest() = default;
};
class GetComputeQuotaScheduleResponseBodyDataCondition : public Darabonba::Model {
public:
  shared_ptr<string> at{};

  GetComputeQuotaScheduleResponseBodyDataCondition() {}

  explicit GetComputeQuotaScheduleResponseBodyDataCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (at) {
      res["at"] = boost::any(*at);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("at") != m.end() && !m["at"].empty()) {
      at = make_shared<string>(boost::any_cast<string>(m["at"]));
    }
  }


  virtual ~GetComputeQuotaScheduleResponseBodyDataCondition() = default;
};
class GetComputeQuotaScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetComputeQuotaScheduleResponseBodyDataCondition> condition{};
  shared_ptr<string> id{};
  shared_ptr<string> plan{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  GetComputeQuotaScheduleResponseBodyData() {}

  explicit GetComputeQuotaScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (plan) {
      res["plan"] = boost::any(*plan);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["condition"].type()) {
        GetComputeQuotaScheduleResponseBodyDataCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["condition"]));
        condition = make_shared<GetComputeQuotaScheduleResponseBodyDataCondition>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("plan") != m.end() && !m["plan"].empty()) {
      plan = make_shared<string>(boost::any_cast<string>(m["plan"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetComputeQuotaScheduleResponseBodyData() = default;
};
class GetComputeQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetComputeQuotaScheduleResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetComputeQuotaScheduleResponseBody() {}

  explicit GetComputeQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetComputeQuotaScheduleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetComputeQuotaScheduleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetComputeQuotaScheduleResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetComputeQuotaScheduleResponseBody() = default;
};
class GetComputeQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComputeQuotaScheduleResponseBody> body{};

  GetComputeQuotaScheduleResponse() {}

  explicit GetComputeQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetComputeQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComputeQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~GetComputeQuotaScheduleResponse() = default;
};
class GetJobResourceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<vector<string>> jobOwnerList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> quotaNicknameList{};

  GetJobResourceUsageRequest() {}

  explicit GetJobResourceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwnerList) {
      res["jobOwnerList"] = boost::any(*jobOwnerList);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameList) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jobOwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jobOwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobOwnerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaNicknameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaNicknameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaNicknameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetJobResourceUsageRequest() = default;
};
class GetJobResourceUsageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> jobOwnerListShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> quotaNicknameListShrink{};

  GetJobResourceUsageShrinkRequest() {}

  explicit GetJobResourceUsageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwnerListShrink) {
      res["jobOwnerList"] = boost::any(*jobOwnerListShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameListShrink) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      jobOwnerListShrink = make_shared<string>(boost::any_cast<string>(m["jobOwnerList"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      quotaNicknameListShrink = make_shared<string>(boost::any_cast<string>(m["quotaNicknameList"]));
    }
  }


  virtual ~GetJobResourceUsageShrinkRequest() = default;
};
class GetJobResourceUsageResponseBodyDataJobResourceUsageList : public Darabonba::Model {
public:
  shared_ptr<long> cuUsage{};
  shared_ptr<string> date{};
  shared_ptr<string> jobOwner{};
  shared_ptr<long> memoryUsage{};
  shared_ptr<string> quotaNickname{};

  GetJobResourceUsageResponseBodyDataJobResourceUsageList() {}

  explicit GetJobResourceUsageResponseBodyDataJobResourceUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cuUsage) {
      res["cuUsage"] = boost::any(*cuUsage);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwner) {
      res["jobOwner"] = boost::any(*jobOwner);
    }
    if (memoryUsage) {
      res["memoryUsage"] = boost::any(*memoryUsage);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cuUsage") != m.end() && !m["cuUsage"].empty()) {
      cuUsage = make_shared<long>(boost::any_cast<long>(m["cuUsage"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwner") != m.end() && !m["jobOwner"].empty()) {
      jobOwner = make_shared<string>(boost::any_cast<string>(m["jobOwner"]));
    }
    if (m.find("memoryUsage") != m.end() && !m["memoryUsage"].empty()) {
      memoryUsage = make_shared<long>(boost::any_cast<long>(m["memoryUsage"]));
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBodyDataJobResourceUsageList() = default;
};
class GetJobResourceUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList>> jobResourceUsageList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetJobResourceUsageResponseBodyData() {}

  explicit GetJobResourceUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobResourceUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*jobResourceUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobResourceUsageList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobResourceUsageList") != m.end() && !m["jobResourceUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["jobResourceUsageList"].type()) {
        vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobResourceUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResourceUsageResponseBodyDataJobResourceUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobResourceUsageList = make_shared<vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBodyData() = default;
};
class GetJobResourceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobResourceUsageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetJobResourceUsageResponseBody() {}

  explicit GetJobResourceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetJobResourceUsageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetJobResourceUsageResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBody() = default;
};
class GetJobResourceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResourceUsageResponseBody> body{};

  GetJobResourceUsageResponse() {}

  explicit GetJobResourceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobResourceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResourceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResourceUsageResponse() = default;
};
class GetMmsAsyncTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> id{};
  shared_ptr<long> objectId{};
  shared_ptr<long> progress{};
  shared_ptr<string> result{};
  shared_ptr<bool> running{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetMmsAsyncTaskResponseBodyData() {}

  explicit GetMmsAsyncTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (objectId) {
      res["objectId"] = boost::any(*objectId);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("objectId") != m.end() && !m["objectId"].empty()) {
      objectId = make_shared<long>(boost::any_cast<long>(m["objectId"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["progress"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<bool>(boost::any_cast<bool>(m["running"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsAsyncTaskResponseBodyData() = default;
};
class GetMmsAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsAsyncTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsAsyncTaskResponseBody() {}

  explicit GetMmsAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsAsyncTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsAsyncTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsAsyncTaskResponseBody() = default;
};
class GetMmsAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsAsyncTaskResponseBody> body{};

  GetMmsAsyncTaskResponse() {}

  explicit GetMmsAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsAsyncTaskResponse() = default;
};
class GetMmsDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<bool> withConfig{};

  GetMmsDataSourceRequest() {}

  explicit GetMmsDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["lang"] = boost::any(*lang);
    }
    if (withConfig) {
      res["withConfig"] = boost::any(*withConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lang") != m.end() && !m["lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["lang"]));
    }
    if (m.find("withConfig") != m.end() && !m["withConfig"].empty()) {
      withConfig = make_shared<bool>(boost::any_cast<bool>(m["withConfig"]));
    }
  }


  virtual ~GetMmsDataSourceRequest() = default;
};
class GetMmsDataSourceResponseBodyDataConfig : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<vector<string>> enums{};
  shared_ptr<string> group{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> placeHolder{};
  shared_ptr<bool> required{};
  shared_ptr<string> subType{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  GetMmsDataSourceResponseBodyDataConfig() {}

  explicit GetMmsDataSourceResponseBodyDataConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enums) {
      res["enums"] = boost::any(*enums);
    }
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (placeHolder) {
      res["placeHolder"] = boost::any(*placeHolder);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (subType) {
      res["subType"] = boost::any(*subType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enums") != m.end() && !m["enums"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enums"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enums"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enums = make_shared<vector<string>>(toVec1);
    }
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("placeHolder") != m.end() && !m["placeHolder"].empty()) {
      placeHolder = make_shared<string>(boost::any_cast<string>(m["placeHolder"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("subType") != m.end() && !m["subType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["subType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~GetMmsDataSourceResponseBodyDataConfig() = default;
};
class GetMmsDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> agentIsOnline{};
  shared_ptr<vector<GetMmsDataSourceResponseBodyDataConfig>> config{};
  shared_ptr<string> createTime{};
  shared_ptr<long> dbNum{};
  shared_ptr<string> errMsg{};
  shared_ptr<long> id{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> name{};
  shared_ptr<string> networklink{};
  shared_ptr<long> partitionNum{};
  shared_ptr<long> partitionsDoingNum{};
  shared_ptr<long> partitionsDoneNum{};
  shared_ptr<long> partitionsFailedNum{};
  shared_ptr<string> region{};
  shared_ptr<long> scanId{};
  shared_ptr<string> status{};
  shared_ptr<long> tableNum{};
  shared_ptr<long> tablesDoingNum{};
  shared_ptr<long> tablesDoneNum{};
  shared_ptr<long> tablesFailedNum{};
  shared_ptr<long> tablesPartDoneNum{};
  shared_ptr<string> type{};

  GetMmsDataSourceResponseBodyData() {}

  explicit GetMmsDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentIsOnline) {
      res["agentIsOnline"] = boost::any(*agentIsOnline);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbNum) {
      res["dbNum"] = boost::any(*dbNum);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastUpdateTime) {
      res["lastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networklink) {
      res["networklink"] = boost::any(*networklink);
    }
    if (partitionNum) {
      res["partitionNum"] = boost::any(*partitionNum);
    }
    if (partitionsDoingNum) {
      res["partitionsDoingNum"] = boost::any(*partitionsDoingNum);
    }
    if (partitionsDoneNum) {
      res["partitionsDoneNum"] = boost::any(*partitionsDoneNum);
    }
    if (partitionsFailedNum) {
      res["partitionsFailedNum"] = boost::any(*partitionsFailedNum);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (scanId) {
      res["scanId"] = boost::any(*scanId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableNum) {
      res["tableNum"] = boost::any(*tableNum);
    }
    if (tablesDoingNum) {
      res["tablesDoingNum"] = boost::any(*tablesDoingNum);
    }
    if (tablesDoneNum) {
      res["tablesDoneNum"] = boost::any(*tablesDoneNum);
    }
    if (tablesFailedNum) {
      res["tablesFailedNum"] = boost::any(*tablesFailedNum);
    }
    if (tablesPartDoneNum) {
      res["tablesPartDoneNum"] = boost::any(*tablesPartDoneNum);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentIsOnline") != m.end() && !m["agentIsOnline"].empty()) {
      agentIsOnline = make_shared<bool>(boost::any_cast<bool>(m["agentIsOnline"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<GetMmsDataSourceResponseBodyDataConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMmsDataSourceResponseBodyDataConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<GetMmsDataSourceResponseBodyDataConfig>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbNum") != m.end() && !m["dbNum"].empty()) {
      dbNum = make_shared<long>(boost::any_cast<long>(m["dbNum"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastUpdateTime") != m.end() && !m["lastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["lastUpdateTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networklink") != m.end() && !m["networklink"].empty()) {
      networklink = make_shared<string>(boost::any_cast<string>(m["networklink"]));
    }
    if (m.find("partitionNum") != m.end() && !m["partitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["partitionNum"]));
    }
    if (m.find("partitionsDoingNum") != m.end() && !m["partitionsDoingNum"].empty()) {
      partitionsDoingNum = make_shared<long>(boost::any_cast<long>(m["partitionsDoingNum"]));
    }
    if (m.find("partitionsDoneNum") != m.end() && !m["partitionsDoneNum"].empty()) {
      partitionsDoneNum = make_shared<long>(boost::any_cast<long>(m["partitionsDoneNum"]));
    }
    if (m.find("partitionsFailedNum") != m.end() && !m["partitionsFailedNum"].empty()) {
      partitionsFailedNum = make_shared<long>(boost::any_cast<long>(m["partitionsFailedNum"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("scanId") != m.end() && !m["scanId"].empty()) {
      scanId = make_shared<long>(boost::any_cast<long>(m["scanId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableNum") != m.end() && !m["tableNum"].empty()) {
      tableNum = make_shared<long>(boost::any_cast<long>(m["tableNum"]));
    }
    if (m.find("tablesDoingNum") != m.end() && !m["tablesDoingNum"].empty()) {
      tablesDoingNum = make_shared<long>(boost::any_cast<long>(m["tablesDoingNum"]));
    }
    if (m.find("tablesDoneNum") != m.end() && !m["tablesDoneNum"].empty()) {
      tablesDoneNum = make_shared<long>(boost::any_cast<long>(m["tablesDoneNum"]));
    }
    if (m.find("tablesFailedNum") != m.end() && !m["tablesFailedNum"].empty()) {
      tablesFailedNum = make_shared<long>(boost::any_cast<long>(m["tablesFailedNum"]));
    }
    if (m.find("tablesPartDoneNum") != m.end() && !m["tablesPartDoneNum"].empty()) {
      tablesPartDoneNum = make_shared<long>(boost::any_cast<long>(m["tablesPartDoneNum"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsDataSourceResponseBodyData() = default;
};
class GetMmsDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsDataSourceResponseBody() {}

  explicit GetMmsDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsDataSourceResponseBody() = default;
};
class GetMmsDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsDataSourceResponseBody> body{};

  GetMmsDataSourceResponse() {}

  explicit GetMmsDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsDataSourceResponse() = default;
};
class GetMmsDbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> extra{};
  shared_ptr<long> id{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<long> numRows{};
  shared_ptr<string> owner{};
  shared_ptr<long> partitions{};
  shared_ptr<long> partitionsDoing{};
  shared_ptr<long> partitionsDone{};
  shared_ptr<long> partitionsFailed{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<long> tables{};
  shared_ptr<long> tablesDoing{};
  shared_ptr<long> tablesDone{};
  shared_ptr<long> tablesFailed{};
  shared_ptr<long> tablesPartDone{};
  shared_ptr<bool> updated{};

  GetMmsDbResponseBodyData() {}

  explicit GetMmsDbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    if (partitionsDoing) {
      res["partitionsDoing"] = boost::any(*partitionsDoing);
    }
    if (partitionsDone) {
      res["partitionsDone"] = boost::any(*partitionsDone);
    }
    if (partitionsFailed) {
      res["partitionsFailed"] = boost::any(*partitionsFailed);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tables) {
      res["tables"] = boost::any(*tables);
    }
    if (tablesDoing) {
      res["tablesDoing"] = boost::any(*tablesDoing);
    }
    if (tablesDone) {
      res["tablesDone"] = boost::any(*tablesDone);
    }
    if (tablesFailed) {
      res["tablesFailed"] = boost::any(*tablesFailed);
    }
    if (tablesPartDone) {
      res["tablesPartDone"] = boost::any(*tablesPartDone);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      partitions = make_shared<long>(boost::any_cast<long>(m["partitions"]));
    }
    if (m.find("partitionsDoing") != m.end() && !m["partitionsDoing"].empty()) {
      partitionsDoing = make_shared<long>(boost::any_cast<long>(m["partitionsDoing"]));
    }
    if (m.find("partitionsDone") != m.end() && !m["partitionsDone"].empty()) {
      partitionsDone = make_shared<long>(boost::any_cast<long>(m["partitionsDone"]));
    }
    if (m.find("partitionsFailed") != m.end() && !m["partitionsFailed"].empty()) {
      partitionsFailed = make_shared<long>(boost::any_cast<long>(m["partitionsFailed"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      tables = make_shared<long>(boost::any_cast<long>(m["tables"]));
    }
    if (m.find("tablesDoing") != m.end() && !m["tablesDoing"].empty()) {
      tablesDoing = make_shared<long>(boost::any_cast<long>(m["tablesDoing"]));
    }
    if (m.find("tablesDone") != m.end() && !m["tablesDone"].empty()) {
      tablesDone = make_shared<long>(boost::any_cast<long>(m["tablesDone"]));
    }
    if (m.find("tablesFailed") != m.end() && !m["tablesFailed"].empty()) {
      tablesFailed = make_shared<long>(boost::any_cast<long>(m["tablesFailed"]));
    }
    if (m.find("tablesPartDone") != m.end() && !m["tablesPartDone"].empty()) {
      tablesPartDone = make_shared<long>(boost::any_cast<long>(m["tablesPartDone"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
  }


  virtual ~GetMmsDbResponseBodyData() = default;
};
class GetMmsDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsDbResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsDbResponseBody() {}

  explicit GetMmsDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsDbResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsDbResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsDbResponseBody() = default;
};
class GetMmsDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsDbResponseBody> body{};

  GetMmsDbResponse() {}

  explicit GetMmsDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsDbResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsDbResponse() = default;
};
class GetMmsFetchMetadataJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> id{};
  shared_ptr<double> progress{};
  shared_ptr<string> result{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  GetMmsFetchMetadataJobResponseBodyData() {}

  explicit GetMmsFetchMetadataJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["progress"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetMmsFetchMetadataJobResponseBodyData() = default;
};
class GetMmsFetchMetadataJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsFetchMetadataJobResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsFetchMetadataJobResponseBody() {}

  explicit GetMmsFetchMetadataJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsFetchMetadataJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsFetchMetadataJobResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsFetchMetadataJobResponseBody() = default;
};
class GetMmsFetchMetadataJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsFetchMetadataJobResponseBody> body{};

  GetMmsFetchMetadataJobResponse() {}

  explicit GetMmsFetchMetadataJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsFetchMetadataJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsFetchMetadataJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsFetchMetadataJobResponse() = default;
};
class GetMmsJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstSchemaName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcSchemaName{};
  shared_ptr<string> status{};
  shared_ptr<bool> stopped{};
  shared_ptr<long> taskDone{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> type{};

  GetMmsJobResponseBodyData() {}

  explicit GetMmsJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstSchemaName) {
      res["dstSchemaName"] = boost::any(*dstSchemaName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcSchemaName) {
      res["srcSchemaName"] = boost::any(*srcSchemaName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stopped) {
      res["stopped"] = boost::any(*stopped);
    }
    if (taskDone) {
      res["taskDone"] = boost::any(*taskDone);
    }
    if (taskNum) {
      res["taskNum"] = boost::any(*taskNum);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstSchemaName") != m.end() && !m["dstSchemaName"].empty()) {
      dstSchemaName = make_shared<string>(boost::any_cast<string>(m["dstSchemaName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcSchemaName") != m.end() && !m["srcSchemaName"].empty()) {
      srcSchemaName = make_shared<string>(boost::any_cast<string>(m["srcSchemaName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stopped") != m.end() && !m["stopped"].empty()) {
      stopped = make_shared<bool>(boost::any_cast<bool>(m["stopped"]));
    }
    if (m.find("taskDone") != m.end() && !m["taskDone"].empty()) {
      taskDone = make_shared<long>(boost::any_cast<long>(m["taskDone"]));
    }
    if (m.find("taskNum") != m.end() && !m["taskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["taskNum"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsJobResponseBodyData() = default;
};
class GetMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsJobResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsJobResponseBody() {}

  explicit GetMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsJobResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsJobResponseBody() = default;
};
class GetMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsJobResponseBody> body{};

  GetMmsJobResponse() {}

  explicit GetMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsJobResponse() = default;
};
class GetMmsPartitionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> id{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<long> numRows{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<long> tableId{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> updated{};
  shared_ptr<string> value{};

  GetMmsPartitionResponseBodyData() {}

  explicit GetMmsPartitionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableId) {
      res["tableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableId") != m.end() && !m["tableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["tableId"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetMmsPartitionResponseBodyData() = default;
};
class GetMmsPartitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsPartitionResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsPartitionResponseBody() {}

  explicit GetMmsPartitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsPartitionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsPartitionResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsPartitionResponseBody() = default;
};
class GetMmsPartitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsPartitionResponseBody> body{};

  GetMmsPartitionResponse() {}

  explicit GetMmsPartitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsPartitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsPartitionResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsPartitionResponse() = default;
};
class GetMmsTableResponseBodyDataSchemaColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  GetMmsTableResponseBodyDataSchemaColumns() {}

  explicit GetMmsTableResponseBodyDataSchemaColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsTableResponseBodyDataSchemaColumns() = default;
};
class GetMmsTableResponseBodyDataSchemaPartitions : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  GetMmsTableResponseBodyDataSchemaPartitions() {}

  explicit GetMmsTableResponseBodyDataSchemaPartitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsTableResponseBodyDataSchemaPartitions() = default;
};
class GetMmsTableResponseBodyDataSchema : public Darabonba::Model {
public:
  shared_ptr<vector<GetMmsTableResponseBodyDataSchemaColumns>> columns{};
  shared_ptr<string> comment{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetMmsTableResponseBodyDataSchemaPartitions>> partitions{};

  GetMmsTableResponseBodyDataSchema() {}

  explicit GetMmsTableResponseBodyDataSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partitions) {
      vector<boost::any> temp1;
      for(auto item1:*partitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["partitions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<GetMmsTableResponseBodyDataSchemaColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMmsTableResponseBodyDataSchemaColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetMmsTableResponseBodyDataSchemaColumns>>(expect1);
      }
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      if (typeid(vector<boost::any>) == m["partitions"].type()) {
        vector<GetMmsTableResponseBodyDataSchemaPartitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["partitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMmsTableResponseBodyDataSchemaPartitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partitions = make_shared<vector<GetMmsTableResponseBodyDataSchemaPartitions>>(expect1);
      }
    }
  }


  virtual ~GetMmsTableResponseBodyDataSchema() = default;
};
class GetMmsTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> extra{};
  shared_ptr<bool> hasPartitions{};
  shared_ptr<long> id{};
  shared_ptr<string> inputFormat{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<long> numRows{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> owner{};
  shared_ptr<long> partitions{};
  shared_ptr<long> partitionsDoing{};
  shared_ptr<long> partitionsDone{};
  shared_ptr<long> partitionsFailed{};
  shared_ptr<GetMmsTableResponseBodyDataSchema> schema{};
  shared_ptr<string> serde{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<bool> updated{};

  GetMmsTableResponseBodyData() {}

  explicit GetMmsTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (hasPartitions) {
      res["hasPartitions"] = boost::any(*hasPartitions);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (inputFormat) {
      res["inputFormat"] = boost::any(*inputFormat);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    if (partitionsDoing) {
      res["partitionsDoing"] = boost::any(*partitionsDoing);
    }
    if (partitionsDone) {
      res["partitionsDone"] = boost::any(*partitionsDone);
    }
    if (partitionsFailed) {
      res["partitionsFailed"] = boost::any(*partitionsFailed);
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serde) {
      res["serde"] = boost::any(*serde);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("hasPartitions") != m.end() && !m["hasPartitions"].empty()) {
      hasPartitions = make_shared<bool>(boost::any_cast<bool>(m["hasPartitions"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("inputFormat") != m.end() && !m["inputFormat"].empty()) {
      inputFormat = make_shared<string>(boost::any_cast<string>(m["inputFormat"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      partitions = make_shared<long>(boost::any_cast<long>(m["partitions"]));
    }
    if (m.find("partitionsDoing") != m.end() && !m["partitionsDoing"].empty()) {
      partitionsDoing = make_shared<long>(boost::any_cast<long>(m["partitionsDoing"]));
    }
    if (m.find("partitionsDone") != m.end() && !m["partitionsDone"].empty()) {
      partitionsDone = make_shared<long>(boost::any_cast<long>(m["partitionsDone"]));
    }
    if (m.find("partitionsFailed") != m.end() && !m["partitionsFailed"].empty()) {
      partitionsFailed = make_shared<long>(boost::any_cast<long>(m["partitionsFailed"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        GetMmsTableResponseBodyDataSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<GetMmsTableResponseBodyDataSchema>(model1);
      }
    }
    if (m.find("serde") != m.end() && !m["serde"].empty()) {
      serde = make_shared<string>(boost::any_cast<string>(m["serde"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
  }


  virtual ~GetMmsTableResponseBodyData() = default;
};
class GetMmsTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsTableResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsTableResponseBody() {}

  explicit GetMmsTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsTableResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsTableResponseBody() = default;
};
class GetMmsTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsTableResponseBody> body{};

  GetMmsTableResponse() {}

  explicit GetMmsTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsTableResponse() = default;
};
class GetMmsTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstSchemaName{};
  shared_ptr<string> dstTableName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> id{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<long> retriedTimes{};
  shared_ptr<bool> running{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcSchemaName{};
  shared_ptr<string> srcTableName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<bool> stopped{};
  shared_ptr<long> tableId{};
  shared_ptr<string> type{};

  GetMmsTaskResponseBodyData() {}

  explicit GetMmsTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstSchemaName) {
      res["dstSchemaName"] = boost::any(*dstSchemaName);
    }
    if (dstTableName) {
      res["dstTableName"] = boost::any(*dstTableName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["jobName"] = boost::any(*jobName);
    }
    if (retriedTimes) {
      res["retriedTimes"] = boost::any(*retriedTimes);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcSchemaName) {
      res["srcSchemaName"] = boost::any(*srcSchemaName);
    }
    if (srcTableName) {
      res["srcTableName"] = boost::any(*srcTableName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stopped) {
      res["stopped"] = boost::any(*stopped);
    }
    if (tableId) {
      res["tableId"] = boost::any(*tableId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstSchemaName") != m.end() && !m["dstSchemaName"].empty()) {
      dstSchemaName = make_shared<string>(boost::any_cast<string>(m["dstSchemaName"]));
    }
    if (m.find("dstTableName") != m.end() && !m["dstTableName"].empty()) {
      dstTableName = make_shared<string>(boost::any_cast<string>(m["dstTableName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["jobId"]));
    }
    if (m.find("jobName") != m.end() && !m["jobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["jobName"]));
    }
    if (m.find("retriedTimes") != m.end() && !m["retriedTimes"].empty()) {
      retriedTimes = make_shared<long>(boost::any_cast<long>(m["retriedTimes"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<bool>(boost::any_cast<bool>(m["running"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcSchemaName") != m.end() && !m["srcSchemaName"].empty()) {
      srcSchemaName = make_shared<string>(boost::any_cast<string>(m["srcSchemaName"]));
    }
    if (m.find("srcTableName") != m.end() && !m["srcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["srcTableName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stopped") != m.end() && !m["stopped"].empty()) {
      stopped = make_shared<bool>(boost::any_cast<bool>(m["stopped"]));
    }
    if (m.find("tableId") != m.end() && !m["tableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["tableId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetMmsTaskResponseBodyData() = default;
};
class GetMmsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMmsTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMmsTaskResponseBody() {}

  explicit GetMmsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMmsTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMmsTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetMmsTaskResponseBody() = default;
};
class GetMmsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMmsTaskResponseBody> body{};

  GetMmsTaskResponse() {}

  explicit GetMmsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMmsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMmsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetMmsTaskResponse() = default;
};
class GetPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceProject{};

  GetPackageRequest() {}

  explicit GetPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceProject) {
      res["sourceProject"] = boost::any(*sourceProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sourceProject") != m.end() && !m["sourceProject"].empty()) {
      sourceProject = make_shared<string>(boost::any_cast<string>(m["sourceProject"]));
    }
  }


  virtual ~GetPackageRequest() = default;
};
class GetPackageResponseBodyDataAllowedProjectList : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> project{};

  GetPackageResponseBodyDataAllowedProjectList() {}

  explicit GetPackageResponseBodyDataAllowedProjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~GetPackageResponseBodyDataAllowedProjectList() = default;
};
class GetPackageResponseBodyDataResourceListFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetPackageResponseBodyDataResourceListFunction() {}

  explicit GetPackageResponseBodyDataResourceListFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListFunction() = default;
};
class GetPackageResponseBodyDataResourceListResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetPackageResponseBodyDataResourceListResource() {}

  explicit GetPackageResponseBodyDataResourceListResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListResource() = default;
};
class GetPackageResponseBodyDataResourceListTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetPackageResponseBodyDataResourceListTable() {}

  explicit GetPackageResponseBodyDataResourceListTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListTable() = default;
};
class GetPackageResponseBodyDataResourceList : public Darabonba::Model {
public:
  shared_ptr<vector<GetPackageResponseBodyDataResourceListFunction>> function{};
  shared_ptr<vector<GetPackageResponseBodyDataResourceListResource>> resource{};
  shared_ptr<vector<GetPackageResponseBodyDataResourceListTable>> table{};

  GetPackageResponseBodyDataResourceList() {}

  explicit GetPackageResponseBodyDataResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<GetPackageResponseBodyDataResourceListFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<GetPackageResponseBodyDataResourceListFunction>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<GetPackageResponseBodyDataResourceListResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<GetPackageResponseBodyDataResourceListResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<GetPackageResponseBodyDataResourceListTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<GetPackageResponseBodyDataResourceListTable>>(expect1);
      }
    }
  }


  virtual ~GetPackageResponseBodyDataResourceList() = default;
};
class GetPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetPackageResponseBodyDataAllowedProjectList>> allowedProjectList{};
  shared_ptr<GetPackageResponseBodyDataResourceList> resourceList{};

  GetPackageResponseBodyData() {}

  explicit GetPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedProjectList) {
      vector<boost::any> temp1;
      for(auto item1:*allowedProjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["allowedProjectList"] = boost::any(temp1);
    }
    if (resourceList) {
      res["resourceList"] = resourceList ? boost::any(resourceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowedProjectList") != m.end() && !m["allowedProjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["allowedProjectList"].type()) {
        vector<GetPackageResponseBodyDataAllowedProjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["allowedProjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataAllowedProjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allowedProjectList = make_shared<vector<GetPackageResponseBodyDataAllowedProjectList>>(expect1);
      }
    }
    if (m.find("resourceList") != m.end() && !m["resourceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceList"].type()) {
        GetPackageResponseBodyDataResourceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceList"]));
        resourceList = make_shared<GetPackageResponseBodyDataResourceList>(model1);
      }
    }
  }


  virtual ~GetPackageResponseBodyData() = default;
};
class GetPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPackageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetPackageResponseBody() {}

  explicit GetPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPackageResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPackageResponseBody() = default;
};
class GetPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPackageResponseBody> body{};

  GetPackageResponse() {}

  explicit GetPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPackageResponseBody>(model1);
      }
    }
  }


  virtual ~GetPackageResponse() = default;
};
class GetProjectRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetProjectRequest() {}

  explicit GetProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("verbose") != m.end() && !m["verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["verbose"]));
    }
  }


  virtual ~GetProjectRequest() = default;
};
class GetProjectResponseBodyDataIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<string> ipList{};
  shared_ptr<string> vpcIpList{};

  GetProjectResponseBodyDataIpWhiteList() {}

  explicit GetProjectResponseBodyDataIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      res["ipList"] = boost::any(*ipList);
    }
    if (vpcIpList) {
      res["vpcIpList"] = boost::any(*vpcIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipList") != m.end() && !m["ipList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["ipList"]));
    }
    if (m.find("vpcIpList") != m.end() && !m["vpcIpList"].empty()) {
      vpcIpList = make_shared<string>(boost::any_cast<string>(m["vpcIpList"]));
    }
  }


  virtual ~GetProjectResponseBodyDataIpWhiteList() = default;
};
class GetProjectResponseBodyDataPropertiesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enable{};
  shared_ptr<string> key{};

  GetProjectResponseBodyDataPropertiesEncryption() {}

  explicit GetProjectResponseBodyDataPropertiesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesEncryption() = default;
};
class GetProjectResponseBodyDataPropertiesExternalProjectProperties : public Darabonba::Model {
public:
  shared_ptr<string> isExternalCatalogBound{};

  GetProjectResponseBodyDataPropertiesExternalProjectProperties() {}

  explicit GetProjectResponseBodyDataPropertiesExternalProjectProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isExternalCatalogBound) {
      res["isExternalCatalogBound"] = boost::any(*isExternalCatalogBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isExternalCatalogBound") != m.end() && !m["isExternalCatalogBound"].empty()) {
      isExternalCatalogBound = make_shared<string>(boost::any_cast<string>(m["isExternalCatalogBound"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesExternalProjectProperties() = default;
};
class GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize : public Darabonba::Model {
public:
  shared_ptr<long> longTermSize{};
  shared_ptr<long> lowFrequencySize{};
  shared_ptr<long> standardSize{};

  GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() {}

  explicit GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (longTermSize) {
      res["longTermSize"] = boost::any(*longTermSize);
    }
    if (lowFrequencySize) {
      res["lowFrequencySize"] = boost::any(*lowFrequencySize);
    }
    if (standardSize) {
      res["standardSize"] = boost::any(*standardSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("longTermSize") != m.end() && !m["longTermSize"].empty()) {
      longTermSize = make_shared<long>(boost::any_cast<long>(m["longTermSize"]));
    }
    if (m.find("lowFrequencySize") != m.end() && !m["lowFrequencySize"].empty()) {
      lowFrequencySize = make_shared<long>(boost::any_cast<long>(m["lowFrequencySize"]));
    }
    if (m.find("standardSize") != m.end() && !m["standardSize"].empty()) {
      standardSize = make_shared<long>(boost::any_cast<long>(m["standardSize"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() = default;
};
class GetProjectResponseBodyDataPropertiesStorageTierInfo : public Darabonba::Model {
public:
  shared_ptr<long> projectBackupSize{};
  shared_ptr<long> projectTotalSize{};
  shared_ptr<GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize> storageTierSize{};

  GetProjectResponseBodyDataPropertiesStorageTierInfo() {}

  explicit GetProjectResponseBodyDataPropertiesStorageTierInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBackupSize) {
      res["projectBackupSize"] = boost::any(*projectBackupSize);
    }
    if (projectTotalSize) {
      res["projectTotalSize"] = boost::any(*projectTotalSize);
    }
    if (storageTierSize) {
      res["storageTierSize"] = storageTierSize ? boost::any(storageTierSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectBackupSize") != m.end() && !m["projectBackupSize"].empty()) {
      projectBackupSize = make_shared<long>(boost::any_cast<long>(m["projectBackupSize"]));
    }
    if (m.find("projectTotalSize") != m.end() && !m["projectTotalSize"].empty()) {
      projectTotalSize = make_shared<long>(boost::any_cast<long>(m["projectTotalSize"]));
    }
    if (m.find("storageTierSize") != m.end() && !m["storageTierSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["storageTierSize"].type()) {
        GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storageTierSize"]));
        storageTierSize = make_shared<GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize>(model1);
      }
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfo() = default;
};
class GetProjectResponseBodyDataPropertiesTableLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  GetProjectResponseBodyDataPropertiesTableLifecycle() {}

  explicit GetProjectResponseBodyDataPropertiesTableLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesTableLifecycle() = default;
};
class GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm : public Darabonba::Model {
public:
  shared_ptr<long> daysAfterLastAccessGreaterThan{};
  shared_ptr<long> daysAfterLastModificationGreaterThan{};
  shared_ptr<long> daysAfterLastTierModificationGreaterThan{};

  GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm() {}

  explicit GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysAfterLastAccessGreaterThan) {
      res["DaysAfterLastAccessGreaterThan"] = boost::any(*daysAfterLastAccessGreaterThan);
    }
    if (daysAfterLastModificationGreaterThan) {
      res["DaysAfterLastModificationGreaterThan"] = boost::any(*daysAfterLastModificationGreaterThan);
    }
    if (daysAfterLastTierModificationGreaterThan) {
      res["DaysAfterLastTierModificationGreaterThan"] = boost::any(*daysAfterLastTierModificationGreaterThan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysAfterLastAccessGreaterThan") != m.end() && !m["DaysAfterLastAccessGreaterThan"].empty()) {
      daysAfterLastAccessGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastAccessGreaterThan"]));
    }
    if (m.find("DaysAfterLastModificationGreaterThan") != m.end() && !m["DaysAfterLastModificationGreaterThan"].empty()) {
      daysAfterLastModificationGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastModificationGreaterThan"]));
    }
    if (m.find("DaysAfterLastTierModificationGreaterThan") != m.end() && !m["DaysAfterLastTierModificationGreaterThan"].empty()) {
      daysAfterLastTierModificationGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastTierModificationGreaterThan"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm() = default;
};
class GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency : public Darabonba::Model {
public:
  shared_ptr<long> daysAfterLastAccessGreaterThan{};
  shared_ptr<long> daysAfterLastModificationGreaterThan{};
  shared_ptr<long> daysAfterLastTierModificationGreaterThan{};

  GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency() {}

  explicit GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysAfterLastAccessGreaterThan) {
      res["DaysAfterLastAccessGreaterThan"] = boost::any(*daysAfterLastAccessGreaterThan);
    }
    if (daysAfterLastModificationGreaterThan) {
      res["DaysAfterLastModificationGreaterThan"] = boost::any(*daysAfterLastModificationGreaterThan);
    }
    if (daysAfterLastTierModificationGreaterThan) {
      res["DaysAfterLastTierModificationGreaterThan"] = boost::any(*daysAfterLastTierModificationGreaterThan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysAfterLastAccessGreaterThan") != m.end() && !m["DaysAfterLastAccessGreaterThan"].empty()) {
      daysAfterLastAccessGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastAccessGreaterThan"]));
    }
    if (m.find("DaysAfterLastModificationGreaterThan") != m.end() && !m["DaysAfterLastModificationGreaterThan"].empty()) {
      daysAfterLastModificationGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastModificationGreaterThan"]));
    }
    if (m.find("DaysAfterLastTierModificationGreaterThan") != m.end() && !m["DaysAfterLastTierModificationGreaterThan"].empty()) {
      daysAfterLastTierModificationGreaterThan = make_shared<long>(boost::any_cast<long>(m["DaysAfterLastTierModificationGreaterThan"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency() = default;
};
class GetProjectResponseBodyDataPropertiesTableLifecycleConfig : public Darabonba::Model {
public:
  shared_ptr<GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm> tierToLongterm{};
  shared_ptr<GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency> tierToLowFrequency{};

  GetProjectResponseBodyDataPropertiesTableLifecycleConfig() {}

  explicit GetProjectResponseBodyDataPropertiesTableLifecycleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tierToLongterm) {
      res["TierToLongterm"] = tierToLongterm ? boost::any(tierToLongterm->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tierToLowFrequency) {
      res["TierToLowFrequency"] = tierToLowFrequency ? boost::any(tierToLowFrequency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TierToLongterm") != m.end() && !m["TierToLongterm"].empty()) {
      if (typeid(map<string, boost::any>) == m["TierToLongterm"].type()) {
        GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TierToLongterm"]));
        tierToLongterm = make_shared<GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm>(model1);
      }
    }
    if (m.find("TierToLowFrequency") != m.end() && !m["TierToLowFrequency"].empty()) {
      if (typeid(map<string, boost::any>) == m["TierToLowFrequency"].type()) {
        GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TierToLowFrequency"]));
        tierToLowFrequency = make_shared<GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency>(model1);
      }
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesTableLifecycleConfig() = default;
};
class GetProjectResponseBodyDataProperties : public Darabonba::Model {
public:
  shared_ptr<bool> allowFullScan{};
  shared_ptr<string> elderTunnelQuota{};
  shared_ptr<bool> enableDecimal2{};
  shared_ptr<bool> enableFdcCacheForce{};
  shared_ptr<bool> enableTieredStorage{};
  shared_ptr<bool> enableTunnelQuotaRoute{};
  shared_ptr<GetProjectResponseBodyDataPropertiesEncryption> encryption{};
  shared_ptr<GetProjectResponseBodyDataPropertiesExternalProjectProperties> externalProjectProperties{};
  shared_ptr<string> fdcQuota{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> sqlMeteringMax{};
  shared_ptr<GetProjectResponseBodyDataPropertiesStorageTierInfo> storageTierInfo{};
  shared_ptr<GetProjectResponseBodyDataPropertiesTableLifecycle> tableLifecycle{};
  shared_ptr<GetProjectResponseBodyDataPropertiesTableLifecycleConfig> tableLifecycleConfig{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tunnelQuota{};
  shared_ptr<string> typeSystem{};

  GetProjectResponseBodyDataProperties() {}

  explicit GetProjectResponseBodyDataProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowFullScan) {
      res["allowFullScan"] = boost::any(*allowFullScan);
    }
    if (elderTunnelQuota) {
      res["elderTunnelQuota"] = boost::any(*elderTunnelQuota);
    }
    if (enableDecimal2) {
      res["enableDecimal2"] = boost::any(*enableDecimal2);
    }
    if (enableFdcCacheForce) {
      res["enableFdcCacheForce"] = boost::any(*enableFdcCacheForce);
    }
    if (enableTieredStorage) {
      res["enableTieredStorage"] = boost::any(*enableTieredStorage);
    }
    if (enableTunnelQuotaRoute) {
      res["enableTunnelQuotaRoute"] = boost::any(*enableTunnelQuotaRoute);
    }
    if (encryption) {
      res["encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (externalProjectProperties) {
      res["externalProjectProperties"] = externalProjectProperties ? boost::any(externalProjectProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fdcQuota) {
      res["fdcQuota"] = boost::any(*fdcQuota);
    }
    if (retentionDays) {
      res["retentionDays"] = boost::any(*retentionDays);
    }
    if (sqlMeteringMax) {
      res["sqlMeteringMax"] = boost::any(*sqlMeteringMax);
    }
    if (storageTierInfo) {
      res["storageTierInfo"] = storageTierInfo ? boost::any(storageTierInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableLifecycle) {
      res["tableLifecycle"] = tableLifecycle ? boost::any(tableLifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableLifecycleConfig) {
      res["tableLifecycleConfig"] = tableLifecycleConfig ? boost::any(tableLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuota) {
      res["tunnelQuota"] = boost::any(*tunnelQuota);
    }
    if (typeSystem) {
      res["typeSystem"] = boost::any(*typeSystem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowFullScan") != m.end() && !m["allowFullScan"].empty()) {
      allowFullScan = make_shared<bool>(boost::any_cast<bool>(m["allowFullScan"]));
    }
    if (m.find("elderTunnelQuota") != m.end() && !m["elderTunnelQuota"].empty()) {
      elderTunnelQuota = make_shared<string>(boost::any_cast<string>(m["elderTunnelQuota"]));
    }
    if (m.find("enableDecimal2") != m.end() && !m["enableDecimal2"].empty()) {
      enableDecimal2 = make_shared<bool>(boost::any_cast<bool>(m["enableDecimal2"]));
    }
    if (m.find("enableFdcCacheForce") != m.end() && !m["enableFdcCacheForce"].empty()) {
      enableFdcCacheForce = make_shared<bool>(boost::any_cast<bool>(m["enableFdcCacheForce"]));
    }
    if (m.find("enableTieredStorage") != m.end() && !m["enableTieredStorage"].empty()) {
      enableTieredStorage = make_shared<bool>(boost::any_cast<bool>(m["enableTieredStorage"]));
    }
    if (m.find("enableTunnelQuotaRoute") != m.end() && !m["enableTunnelQuotaRoute"].empty()) {
      enableTunnelQuotaRoute = make_shared<bool>(boost::any_cast<bool>(m["enableTunnelQuotaRoute"]));
    }
    if (m.find("encryption") != m.end() && !m["encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["encryption"].type()) {
        GetProjectResponseBodyDataPropertiesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encryption"]));
        encryption = make_shared<GetProjectResponseBodyDataPropertiesEncryption>(model1);
      }
    }
    if (m.find("externalProjectProperties") != m.end() && !m["externalProjectProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["externalProjectProperties"].type()) {
        GetProjectResponseBodyDataPropertiesExternalProjectProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["externalProjectProperties"]));
        externalProjectProperties = make_shared<GetProjectResponseBodyDataPropertiesExternalProjectProperties>(model1);
      }
    }
    if (m.find("fdcQuota") != m.end() && !m["fdcQuota"].empty()) {
      fdcQuota = make_shared<string>(boost::any_cast<string>(m["fdcQuota"]));
    }
    if (m.find("retentionDays") != m.end() && !m["retentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["retentionDays"]));
    }
    if (m.find("sqlMeteringMax") != m.end() && !m["sqlMeteringMax"].empty()) {
      sqlMeteringMax = make_shared<string>(boost::any_cast<string>(m["sqlMeteringMax"]));
    }
    if (m.find("storageTierInfo") != m.end() && !m["storageTierInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["storageTierInfo"].type()) {
        GetProjectResponseBodyDataPropertiesStorageTierInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storageTierInfo"]));
        storageTierInfo = make_shared<GetProjectResponseBodyDataPropertiesStorageTierInfo>(model1);
      }
    }
    if (m.find("tableLifecycle") != m.end() && !m["tableLifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycle"].type()) {
        GetProjectResponseBodyDataPropertiesTableLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycle"]));
        tableLifecycle = make_shared<GetProjectResponseBodyDataPropertiesTableLifecycle>(model1);
      }
    }
    if (m.find("tableLifecycleConfig") != m.end() && !m["tableLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycleConfig"].type()) {
        GetProjectResponseBodyDataPropertiesTableLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycleConfig"]));
        tableLifecycleConfig = make_shared<GetProjectResponseBodyDataPropertiesTableLifecycleConfig>(model1);
      }
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuota") != m.end() && !m["tunnelQuota"].empty()) {
      tunnelQuota = make_shared<string>(boost::any_cast<string>(m["tunnelQuota"]));
    }
    if (m.find("typeSystem") != m.end() && !m["typeSystem"].empty()) {
      typeSystem = make_shared<string>(boost::any_cast<string>(m["typeSystem"]));
    }
  }


  virtual ~GetProjectResponseBodyDataProperties() = default;
};
class GetProjectResponseBodyDataSaleTag : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  GetProjectResponseBodyDataSaleTag() {}

  explicit GetProjectResponseBodyDataSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSaleTag() = default;
};
class GetProjectResponseBodyDataSecurityPropertiesProjectProtection : public Darabonba::Model {
public:
  shared_ptr<string> exceptionPolicy{};
  shared_ptr<bool> protected_{};

  GetProjectResponseBodyDataSecurityPropertiesProjectProtection() {}

  explicit GetProjectResponseBodyDataSecurityPropertiesProjectProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionPolicy) {
      res["exceptionPolicy"] = boost::any(*exceptionPolicy);
    }
    if (protected_) {
      res["protected"] = boost::any(*protected_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exceptionPolicy") != m.end() && !m["exceptionPolicy"].empty()) {
      exceptionPolicy = make_shared<string>(boost::any_cast<string>(m["exceptionPolicy"]));
    }
    if (m.find("protected") != m.end() && !m["protected"].empty()) {
      protected_ = make_shared<bool>(boost::any_cast<bool>(m["protected"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSecurityPropertiesProjectProtection() = default;
};
class GetProjectResponseBodyDataSecurityProperties : public Darabonba::Model {
public:
  shared_ptr<bool> enableDownloadPrivilege{};
  shared_ptr<bool> labelSecurity{};
  shared_ptr<bool> objectCreatorHasAccessPermission{};
  shared_ptr<bool> objectCreatorHasGrantPermission{};
  shared_ptr<GetProjectResponseBodyDataSecurityPropertiesProjectProtection> projectProtection{};
  shared_ptr<bool> usingAcl{};
  shared_ptr<bool> usingPolicy{};

  GetProjectResponseBodyDataSecurityProperties() {}

  explicit GetProjectResponseBodyDataSecurityProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDownloadPrivilege) {
      res["enableDownloadPrivilege"] = boost::any(*enableDownloadPrivilege);
    }
    if (labelSecurity) {
      res["labelSecurity"] = boost::any(*labelSecurity);
    }
    if (objectCreatorHasAccessPermission) {
      res["objectCreatorHasAccessPermission"] = boost::any(*objectCreatorHasAccessPermission);
    }
    if (objectCreatorHasGrantPermission) {
      res["objectCreatorHasGrantPermission"] = boost::any(*objectCreatorHasGrantPermission);
    }
    if (projectProtection) {
      res["projectProtection"] = projectProtection ? boost::any(projectProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usingAcl) {
      res["usingAcl"] = boost::any(*usingAcl);
    }
    if (usingPolicy) {
      res["usingPolicy"] = boost::any(*usingPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDownloadPrivilege") != m.end() && !m["enableDownloadPrivilege"].empty()) {
      enableDownloadPrivilege = make_shared<bool>(boost::any_cast<bool>(m["enableDownloadPrivilege"]));
    }
    if (m.find("labelSecurity") != m.end() && !m["labelSecurity"].empty()) {
      labelSecurity = make_shared<bool>(boost::any_cast<bool>(m["labelSecurity"]));
    }
    if (m.find("objectCreatorHasAccessPermission") != m.end() && !m["objectCreatorHasAccessPermission"].empty()) {
      objectCreatorHasAccessPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasAccessPermission"]));
    }
    if (m.find("objectCreatorHasGrantPermission") != m.end() && !m["objectCreatorHasGrantPermission"].empty()) {
      objectCreatorHasGrantPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasGrantPermission"]));
    }
    if (m.find("projectProtection") != m.end() && !m["projectProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectProtection"].type()) {
        GetProjectResponseBodyDataSecurityPropertiesProjectProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectProtection"]));
        projectProtection = make_shared<GetProjectResponseBodyDataSecurityPropertiesProjectProtection>(model1);
      }
    }
    if (m.find("usingAcl") != m.end() && !m["usingAcl"].empty()) {
      usingAcl = make_shared<bool>(boost::any_cast<bool>(m["usingAcl"]));
    }
    if (m.find("usingPolicy") != m.end() && !m["usingPolicy"].empty()) {
      usingPolicy = make_shared<bool>(boost::any_cast<bool>(m["usingPolicy"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSecurityProperties() = default;
};
class GetProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> costStorage{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> defaultQuota{};
  shared_ptr<GetProjectResponseBodyDataIpWhiteList> ipWhiteList{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> productType{};
  shared_ptr<GetProjectResponseBodyDataProperties> properties{};
  shared_ptr<string> regionId{};
  shared_ptr<GetProjectResponseBodyDataSaleTag> saleTag{};
  shared_ptr<GetProjectResponseBodyDataSecurityProperties> securityProperties{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> superAdmins{};
  shared_ptr<bool> threeTierModel{};
  shared_ptr<string> type{};

  GetProjectResponseBodyData() {}

  explicit GetProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (costStorage) {
      res["costStorage"] = boost::any(*costStorage);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (defaultQuota) {
      res["defaultQuota"] = boost::any(*defaultQuota);
    }
    if (ipWhiteList) {
      res["ipWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (properties) {
      res["properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityProperties) {
      res["securityProperties"] = securityProperties ? boost::any(securityProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (superAdmins) {
      res["superAdmins"] = boost::any(*superAdmins);
    }
    if (threeTierModel) {
      res["threeTierModel"] = boost::any(*threeTierModel);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("costStorage") != m.end() && !m["costStorage"].empty()) {
      costStorage = make_shared<string>(boost::any_cast<string>(m["costStorage"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["createdTime"]));
    }
    if (m.find("defaultQuota") != m.end() && !m["defaultQuota"].empty()) {
      defaultQuota = make_shared<string>(boost::any_cast<string>(m["defaultQuota"]));
    }
    if (m.find("ipWhiteList") != m.end() && !m["ipWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ipWhiteList"].type()) {
        GetProjectResponseBodyDataIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ipWhiteList"]));
        ipWhiteList = make_shared<GetProjectResponseBodyDataIpWhiteList>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["properties"].type()) {
        GetProjectResponseBodyDataProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["properties"]));
        properties = make_shared<GetProjectResponseBodyDataProperties>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetProjectResponseBodyDataSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetProjectResponseBodyDataSaleTag>(model1);
      }
    }
    if (m.find("securityProperties") != m.end() && !m["securityProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityProperties"].type()) {
        GetProjectResponseBodyDataSecurityProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityProperties"]));
        securityProperties = make_shared<GetProjectResponseBodyDataSecurityProperties>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("superAdmins") != m.end() && !m["superAdmins"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["superAdmins"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["superAdmins"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      superAdmins = make_shared<vector<string>>(toVec1);
    }
    if (m.find("threeTierModel") != m.end() && !m["threeTierModel"].empty()) {
      threeTierModel = make_shared<bool>(boost::any_cast<bool>(m["threeTierModel"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetProjectResponseBodyData() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProjectResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProven{};
  shared_ptr<bool> mock{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaRequest() {}

  explicit GetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProven) {
      res["AkProven"] = boost::any(*akProven);
    }
    if (mock) {
      res["mock"] = boost::any(*mock);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProven") != m.end() && !m["AkProven"].empty()) {
      akProven = make_shared<string>(boost::any_cast<string>(m["AkProven"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["mock"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaRequest() = default;
};
class GetQuotaResponseBodyBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyBillingPolicy() {}

  explicit GetQuotaResponseBodyBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyBillingPolicy() = default;
};
class GetQuotaResponseBodyDataBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyDataBillingPolicy() {}

  explicit GetQuotaResponseBodyDataBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataBillingPolicy() = default;
};
class GetQuotaResponseBodyDataSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodyDataSaleTag() {}

  explicit GetQuotaResponseBodyDataSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSaleTag() = default;
};
class GetQuotaResponseBodyDataScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyDataScheduleInfo() {}

  explicit GetQuotaResponseBodyDataScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataScheduleInfo() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodyDataSubQuotaInfoListSaleTag() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListSaleTag() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodyDataSubQuotaInfoList() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoList() = default;
};
class GetQuotaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyDataBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodyDataSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyDataScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaResponseBodyDataSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodyData() {}

  explicit GetQuotaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyDataBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyDataBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodyDataSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodyDataSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyDataScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyDataScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaResponseBodyDataSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaResponseBodyDataSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaResponseBodyDataSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodyData() = default;
};
class GetQuotaResponseBodySaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodySaleTag() {}

  explicit GetQuotaResponseBodySaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodySaleTag() = default;
};
class GetQuotaResponseBodyScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyScheduleInfo() {}

  explicit GetQuotaResponseBodyScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyScheduleInfo() = default;
};
class GetQuotaResponseBodySubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodySubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaResponseBodySubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaResponseBodySubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodySubQuotaInfoListSaleTag() {}

  explicit GetQuotaResponseBodySubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListSaleTag() = default;
};
class GetQuotaResponseBodySubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodySubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaResponseBodySubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaResponseBodySubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodySubQuotaInfoList() {}

  explicit GetQuotaResponseBodySubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodySubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodySubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodySubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodySubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodySubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodySubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoList() = default;
};
class GetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<GetQuotaResponseBodyData> data{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQuotaResponseBodySaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaResponseBodySubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBody() {}

  explicit GetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaResponseBodyData>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodySaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodySaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaResponseBodySubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaResponseBodySubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaResponseBodySubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBody() = default;
};
class GetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaResponseBody> body{};

  GetQuotaResponse() {}

  explicit GetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaResponse() = default;
};
class GetQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaPlanRequest() {}

  explicit GetQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaPlanRequest() = default;
};
class GetQuotaPlanResponseBodyDataQuotaBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaPlanResponseBodyDataQuotaBillingPolicy() {}

  explicit GetQuotaPlanResponseBodyDataQuotaBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaBillingPolicy() = default;
};
class GetQuotaPlanResponseBodyDataQuotaScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  GetQuotaPlanResponseBodyDataQuotaScheduleInfo() {}

  explicit GetQuotaPlanResponseBodyDataQuotaScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaScheduleInfo() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() = default;
};
class GetQuotaPlanResponseBodyDataQuota : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaPlanResponseBodyDataQuota() {}

  explicit GetQuotaPlanResponseBodyDataQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaPlanResponseBodyDataQuotaBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaPlanResponseBodyDataQuotaBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaPlanResponseBodyDataQuotaScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaPlanResponseBodyDataQuotaScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuota() = default;
};
class GetQuotaPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuota> quota{};

  GetQuotaPlanResponseBodyData() {}

  explicit GetQuotaPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        GetQuotaPlanResponseBodyDataQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<GetQuotaPlanResponseBodyDataQuota>(model1);
      }
    }
  }


  virtual ~GetQuotaPlanResponseBodyData() = default;
};
class GetQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetQuotaPlanResponseBody() {}

  explicit GetQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaPlanResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBody() = default;
};
class GetQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaPlanResponseBody> body{};

  GetQuotaPlanResponse() {}

  explicit GetQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaPlanResponse() = default;
};
class GetQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayTimezone{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaScheduleRequest() {}

  explicit GetQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayTimezone) {
      res["displayTimezone"] = boost::any(*displayTimezone);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayTimezone") != m.end() && !m["displayTimezone"].empty()) {
      displayTimezone = make_shared<string>(boost::any_cast<string>(m["displayTimezone"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaScheduleRequest() = default;
};
class GetQuotaScheduleResponseBodyDataCondition : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> at{};

  GetQuotaScheduleResponseBodyDataCondition() {}

  explicit GetQuotaScheduleResponseBodyDataCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["after"] = boost::any(*after);
    }
    if (at) {
      res["at"] = boost::any(*at);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("after") != m.end() && !m["after"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["after"]));
    }
    if (m.find("at") != m.end() && !m["at"].empty()) {
      at = make_shared<string>(boost::any_cast<string>(m["at"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBodyDataCondition() = default;
};
class GetQuotaScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetQuotaScheduleResponseBodyDataCondition> condition{};
  shared_ptr<string> id{};
  shared_ptr<string> operator_{};
  shared_ptr<string> plan{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  GetQuotaScheduleResponseBodyData() {}

  explicit GetQuotaScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (plan) {
      res["plan"] = boost::any(*plan);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["condition"].type()) {
        GetQuotaScheduleResponseBodyDataCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["condition"]));
        condition = make_shared<GetQuotaScheduleResponseBodyDataCondition>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("plan") != m.end() && !m["plan"].empty()) {
      plan = make_shared<string>(boost::any_cast<string>(m["plan"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBodyData() = default;
};
class GetQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetQuotaScheduleResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetQuotaScheduleResponseBody() {}

  explicit GetQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetQuotaScheduleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaScheduleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetQuotaScheduleResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBody() = default;
};
class GetQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaScheduleResponseBody> body{};

  GetQuotaScheduleResponse() {}

  explicit GetQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaScheduleResponse() = default;
};
class GetQuotaUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggMethod{};
  shared_ptr<long> from{};
  shared_ptr<vector<string>> plotTypes{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> subQuotaNickname{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> to{};
  shared_ptr<vector<string>> yAxisTypes{};

  GetQuotaUsageRequest() {}

  explicit GetQuotaUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggMethod) {
      res["aggMethod"] = boost::any(*aggMethod);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (plotTypes) {
      res["plotTypes"] = boost::any(*plotTypes);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (subQuotaNickname) {
      res["subQuotaNickname"] = boost::any(*subQuotaNickname);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (yAxisTypes) {
      res["yAxisTypes"] = boost::any(*yAxisTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggMethod") != m.end() && !m["aggMethod"].empty()) {
      aggMethod = make_shared<string>(boost::any_cast<string>(m["aggMethod"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("plotTypes") != m.end() && !m["plotTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["plotTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["plotTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      plotTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("subQuotaNickname") != m.end() && !m["subQuotaNickname"].empty()) {
      subQuotaNickname = make_shared<string>(boost::any_cast<string>(m["subQuotaNickname"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("yAxisTypes") != m.end() && !m["yAxisTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["yAxisTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yAxisTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yAxisTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetQuotaUsageRequest() = default;
};
class GetQuotaUsageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggMethod{};
  shared_ptr<long> from{};
  shared_ptr<string> plotTypesShrink{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> subQuotaNickname{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> to{};
  shared_ptr<string> yAxisTypesShrink{};

  GetQuotaUsageShrinkRequest() {}

  explicit GetQuotaUsageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggMethod) {
      res["aggMethod"] = boost::any(*aggMethod);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (plotTypesShrink) {
      res["plotTypes"] = boost::any(*plotTypesShrink);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (subQuotaNickname) {
      res["subQuotaNickname"] = boost::any(*subQuotaNickname);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (yAxisTypesShrink) {
      res["yAxisTypes"] = boost::any(*yAxisTypesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggMethod") != m.end() && !m["aggMethod"].empty()) {
      aggMethod = make_shared<string>(boost::any_cast<string>(m["aggMethod"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("plotTypes") != m.end() && !m["plotTypes"].empty()) {
      plotTypesShrink = make_shared<string>(boost::any_cast<string>(m["plotTypes"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("subQuotaNickname") != m.end() && !m["subQuotaNickname"].empty()) {
      subQuotaNickname = make_shared<string>(boost::any_cast<string>(m["subQuotaNickname"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("yAxisTypes") != m.end() && !m["yAxisTypes"].empty()) {
      yAxisTypesShrink = make_shared<string>(boost::any_cast<string>(m["yAxisTypes"]));
    }
  }


  virtual ~GetQuotaUsageShrinkRequest() = default;
};
class GetQuotaUsageResponseBodyDataPlot : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> yAxis{};

  GetQuotaUsageResponseBodyDataPlot() {}

  explicit GetQuotaUsageResponseBodyDataPlot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (yAxis) {
      res["yAxis"] = boost::any(*yAxis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("yAxis") != m.end() && !m["yAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["yAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yAxis = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetQuotaUsageResponseBodyDataPlot() = default;
};
class GetQuotaUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<vector<GetQuotaUsageResponseBodyDataPlot>> plot{};

  GetQuotaUsageResponseBodyData() {}

  explicit GetQuotaUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      res["metrics"] = boost::any(*metrics);
    }
    if (plot) {
      vector<boost::any> temp1;
      for(auto item1:*plot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["plot"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metrics") != m.end() && !m["metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("plot") != m.end() && !m["plot"].empty()) {
      if (typeid(vector<boost::any>) == m["plot"].type()) {
        vector<GetQuotaUsageResponseBodyDataPlot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["plot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaUsageResponseBodyDataPlot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        plot = make_shared<vector<GetQuotaUsageResponseBodyDataPlot>>(expect1);
      }
    }
  }


  virtual ~GetQuotaUsageResponseBodyData() = default;
};
class GetQuotaUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaUsageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetQuotaUsageResponseBody() {}

  explicit GetQuotaUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaUsageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaUsageResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetQuotaUsageResponseBody() = default;
};
class GetQuotaUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaUsageResponseBody> body{};

  GetQuotaUsageResponse() {}

  explicit GetQuotaUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaUsageResponse() = default;
};
class GetRoleAclResponseBodyDataFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataFunction() {}

  explicit GetRoleAclResponseBodyDataFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataFunction() = default;
};
class GetRoleAclResponseBodyDataInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataInstance() {}

  explicit GetRoleAclResponseBodyDataInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataInstance() = default;
};
class GetRoleAclResponseBodyDataPackage : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataPackage() {}

  explicit GetRoleAclResponseBodyDataPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataPackage() = default;
};
class GetRoleAclResponseBodyDataProject : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataProject() {}

  explicit GetRoleAclResponseBodyDataProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataProject() = default;
};
class GetRoleAclResponseBodyDataResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataResource() {}

  explicit GetRoleAclResponseBodyDataResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataResource() = default;
};
class GetRoleAclResponseBodyDataTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  GetRoleAclResponseBodyDataTable() {}

  explicit GetRoleAclResponseBodyDataTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataTable() = default;
};
class GetRoleAclResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetRoleAclResponseBodyDataFunction>> function{};
  shared_ptr<vector<GetRoleAclResponseBodyDataInstance>> instance{};
  shared_ptr<vector<GetRoleAclResponseBodyDataPackage>> package{};
  shared_ptr<vector<GetRoleAclResponseBodyDataProject>> project{};
  shared_ptr<vector<GetRoleAclResponseBodyDataResource>> resource{};
  shared_ptr<vector<GetRoleAclResponseBodyDataTable>> table{};

  GetRoleAclResponseBodyData() {}

  explicit GetRoleAclResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instance"] = boost::any(temp1);
    }
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["package"] = boost::any(temp1);
    }
    if (project) {
      vector<boost::any> temp1;
      for(auto item1:*project){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["project"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<GetRoleAclResponseBodyDataFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<GetRoleAclResponseBodyDataFunction>>(expect1);
      }
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<GetRoleAclResponseBodyDataInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<GetRoleAclResponseBodyDataInstance>>(expect1);
      }
    }
    if (m.find("package") != m.end() && !m["package"].empty()) {
      if (typeid(vector<boost::any>) == m["package"].type()) {
        vector<GetRoleAclResponseBodyDataPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<GetRoleAclResponseBodyDataPackage>>(expect1);
      }
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(vector<boost::any>) == m["project"].type()) {
        vector<GetRoleAclResponseBodyDataProject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["project"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataProject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        project = make_shared<vector<GetRoleAclResponseBodyDataProject>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<GetRoleAclResponseBodyDataResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<GetRoleAclResponseBodyDataResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<GetRoleAclResponseBodyDataTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<GetRoleAclResponseBodyDataTable>>(expect1);
      }
    }
  }


  virtual ~GetRoleAclResponseBodyData() = default;
};
class GetRoleAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRoleAclResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetRoleAclResponseBody() {}

  explicit GetRoleAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRoleAclResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRoleAclResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRoleAclResponseBody() = default;
};
class GetRoleAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleAclResponseBody> body{};

  GetRoleAclResponse() {}

  explicit GetRoleAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRoleAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleAclResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleAclResponse() = default;
};
class GetRoleAclOnObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};

  GetRoleAclOnObjectRequest() {}

  explicit GetRoleAclOnObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectName) {
      res["objectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectName") != m.end() && !m["objectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["objectName"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~GetRoleAclOnObjectRequest() = default;
};
class GetRoleAclOnObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};

  GetRoleAclOnObjectResponseBodyData() {}

  explicit GetRoleAclOnObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRoleAclOnObjectResponseBodyData() = default;
};
class GetRoleAclOnObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRoleAclOnObjectResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetRoleAclOnObjectResponseBody() {}

  explicit GetRoleAclOnObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRoleAclOnObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRoleAclOnObjectResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRoleAclOnObjectResponseBody() = default;
};
class GetRoleAclOnObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleAclOnObjectResponseBody> body{};

  GetRoleAclOnObjectResponse() {}

  explicit GetRoleAclOnObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRoleAclOnObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleAclOnObjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleAclOnObjectResponse() = default;
};
class GetRolePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetRolePolicyResponseBody() {}

  explicit GetRolePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRolePolicyResponseBody() = default;
};
class GetRolePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRolePolicyResponseBody> body{};

  GetRolePolicyResponse() {}

  explicit GetRolePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRolePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRolePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetRolePolicyResponse() = default;
};
class GetRunningJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<vector<string>> jobOwnerList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> quotaNicknameList{};
  shared_ptr<long> to{};

  GetRunningJobsRequest() {}

  explicit GetRunningJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (jobOwnerList) {
      res["jobOwnerList"] = boost::any(*jobOwnerList);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameList) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameList);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jobOwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jobOwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobOwnerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaNicknameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaNicknameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaNicknameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetRunningJobsRequest() = default;
};
class GetRunningJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> jobOwnerListShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> quotaNicknameListShrink{};
  shared_ptr<long> to{};

  GetRunningJobsShrinkRequest() {}

  explicit GetRunningJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (jobOwnerListShrink) {
      res["jobOwnerList"] = boost::any(*jobOwnerListShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameListShrink) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameListShrink);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      jobOwnerListShrink = make_shared<string>(boost::any_cast<string>(m["jobOwnerList"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      quotaNicknameListShrink = make_shared<string>(boost::any_cast<string>(m["quotaNicknameList"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetRunningJobsShrinkRequest() = default;
};
class GetRunningJobsResponseBodyDataRunningJobInfoList : public Darabonba::Model {
public:
  shared_ptr<double> cuSnapshot{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobOwner{};
  shared_ptr<double> memorySnapshot{};
  shared_ptr<double> progress{};
  shared_ptr<string> project{};
  shared_ptr<string> quotaNickname{};
  shared_ptr<long> runningAtTime{};
  shared_ptr<long> submittedAtTime{};

  GetRunningJobsResponseBodyDataRunningJobInfoList() {}

  explicit GetRunningJobsResponseBodyDataRunningJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cuSnapshot) {
      res["cuSnapshot"] = boost::any(*cuSnapshot);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (jobOwner) {
      res["jobOwner"] = boost::any(*jobOwner);
    }
    if (memorySnapshot) {
      res["memorySnapshot"] = boost::any(*memorySnapshot);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    if (runningAtTime) {
      res["runningAtTime"] = boost::any(*runningAtTime);
    }
    if (submittedAtTime) {
      res["submittedAtTime"] = boost::any(*submittedAtTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cuSnapshot") != m.end() && !m["cuSnapshot"].empty()) {
      cuSnapshot = make_shared<double>(boost::any_cast<double>(m["cuSnapshot"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("jobOwner") != m.end() && !m["jobOwner"].empty()) {
      jobOwner = make_shared<string>(boost::any_cast<string>(m["jobOwner"]));
    }
    if (m.find("memorySnapshot") != m.end() && !m["memorySnapshot"].empty()) {
      memorySnapshot = make_shared<double>(boost::any_cast<double>(m["memorySnapshot"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["progress"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
    if (m.find("runningAtTime") != m.end() && !m["runningAtTime"].empty()) {
      runningAtTime = make_shared<long>(boost::any_cast<long>(m["runningAtTime"]));
    }
    if (m.find("submittedAtTime") != m.end() && !m["submittedAtTime"].empty()) {
      submittedAtTime = make_shared<long>(boost::any_cast<long>(m["submittedAtTime"]));
    }
  }


  virtual ~GetRunningJobsResponseBodyDataRunningJobInfoList() = default;
};
class GetRunningJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetRunningJobsResponseBodyDataRunningJobInfoList>> runningJobInfoList{};
  shared_ptr<long> totalCount{};

  GetRunningJobsResponseBodyData() {}

  explicit GetRunningJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (runningJobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*runningJobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["runningJobInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("runningJobInfoList") != m.end() && !m["runningJobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["runningJobInfoList"].type()) {
        vector<GetRunningJobsResponseBodyDataRunningJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["runningJobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRunningJobsResponseBodyDataRunningJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runningJobInfoList = make_shared<vector<GetRunningJobsResponseBodyDataRunningJobInfoList>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetRunningJobsResponseBodyData() = default;
};
class GetRunningJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRunningJobsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetRunningJobsResponseBody() {}

  explicit GetRunningJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRunningJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRunningJobsResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRunningJobsResponseBody() = default;
};
class GetRunningJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRunningJobsResponseBody> body{};

  GetRunningJobsResponse() {}

  explicit GetRunningJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRunningJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRunningJobsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRunningJobsResponse() = default;
};
class GetTableInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> schemaName{};
  shared_ptr<string> type{};

  GetTableInfoRequest() {}

  explicit GetTableInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTableInfoRequest() = default;
};
class GetTableInfoResponseBodyDataClusterInfoSortCols : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> order{};

  GetTableInfoResponseBodyDataClusterInfoSortCols() {}

  explicit GetTableInfoResponseBodyDataClusterInfoSortCols(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["order"]));
    }
  }


  virtual ~GetTableInfoResponseBodyDataClusterInfoSortCols() = default;
};
class GetTableInfoResponseBodyDataClusterInfo : public Darabonba::Model {
public:
  shared_ptr<long> bucketNum{};
  shared_ptr<vector<string>> clusterCols{};
  shared_ptr<string> clusterType{};
  shared_ptr<vector<GetTableInfoResponseBodyDataClusterInfoSortCols>> sortCols{};

  GetTableInfoResponseBodyDataClusterInfo() {}

  explicit GetTableInfoResponseBodyDataClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketNum) {
      res["bucketNum"] = boost::any(*bucketNum);
    }
    if (clusterCols) {
      res["clusterCols"] = boost::any(*clusterCols);
    }
    if (clusterType) {
      res["clusterType"] = boost::any(*clusterType);
    }
    if (sortCols) {
      vector<boost::any> temp1;
      for(auto item1:*sortCols){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sortCols"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketNum") != m.end() && !m["bucketNum"].empty()) {
      bucketNum = make_shared<long>(boost::any_cast<long>(m["bucketNum"]));
    }
    if (m.find("clusterCols") != m.end() && !m["clusterCols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["clusterCols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["clusterCols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterCols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("clusterType") != m.end() && !m["clusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["clusterType"]));
    }
    if (m.find("sortCols") != m.end() && !m["sortCols"].empty()) {
      if (typeid(vector<boost::any>) == m["sortCols"].type()) {
        vector<GetTableInfoResponseBodyDataClusterInfoSortCols> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sortCols"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableInfoResponseBodyDataClusterInfoSortCols model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sortCols = make_shared<vector<GetTableInfoResponseBodyDataClusterInfoSortCols>>(expect1);
      }
    }
  }


  virtual ~GetTableInfoResponseBodyDataClusterInfo() = default;
};
class GetTableInfoResponseBodyDataNativeColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetTableInfoResponseBodyDataNativeColumns() {}

  explicit GetTableInfoResponseBodyDataNativeColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTableInfoResponseBodyDataNativeColumns() = default;
};
class GetTableInfoResponseBodyDataPartitionColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetTableInfoResponseBodyDataPartitionColumns() {}

  explicit GetTableInfoResponseBodyDataPartitionColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTableInfoResponseBodyDataPartitionColumns() = default;
};
class GetTableInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoRefreshEnabled{};
  shared_ptr<GetTableInfoResponseBodyDataClusterInfo> clusterInfo{};
  shared_ptr<string> comment{};
  shared_ptr<string> createTableDDL{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<long> fileNum{};
  shared_ptr<bool> isExternalTable{};
  shared_ptr<bool> isOutdated{};
  shared_ptr<long> lastAccessTime{};
  shared_ptr<long> lastDDLTime{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> lifecycle{};
  shared_ptr<string> location{};
  shared_ptr<bool> materializedView{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetTableInfoResponseBodyDataNativeColumns>> nativeColumns{};
  shared_ptr<string> odpsPropertiesRolearn{};
  shared_ptr<bool> odpsSqlTextOptionFlushHeader{};
  shared_ptr<long> odpsTextOptionHeaderLinesCount{};
  shared_ptr<string> owner{};
  shared_ptr<vector<GetTableInfoResponseBodyDataPartitionColumns>> partitionColumns{};
  shared_ptr<long> physicalSize{};
  shared_ptr<string> projectName{};
  shared_ptr<bool> rewriteEnabled{};
  shared_ptr<string> schema{};
  shared_ptr<long> size{};
  shared_ptr<string> storageHandler{};
  shared_ptr<string> tableLabel{};
  shared_ptr<string> tablesotreTableName{};
  shared_ptr<string> tablestoreColumnsMapping{};
  shared_ptr<string> type{};
  shared_ptr<string> viewText{};

  GetTableInfoResponseBodyData() {}

  explicit GetTableInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefreshEnabled) {
      res["autoRefreshEnabled"] = boost::any(*autoRefreshEnabled);
    }
    if (clusterInfo) {
      res["clusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (createTableDDL) {
      res["createTableDDL"] = boost::any(*createTableDDL);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (fileNum) {
      res["fileNum"] = boost::any(*fileNum);
    }
    if (isExternalTable) {
      res["isExternalTable"] = boost::any(*isExternalTable);
    }
    if (isOutdated) {
      res["isOutdated"] = boost::any(*isOutdated);
    }
    if (lastAccessTime) {
      res["lastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (lastDDLTime) {
      res["lastDDLTime"] = boost::any(*lastDDLTime);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lifecycle) {
      res["lifecycle"] = boost::any(*lifecycle);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (materializedView) {
      res["materializedView"] = boost::any(*materializedView);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nativeColumns) {
      vector<boost::any> temp1;
      for(auto item1:*nativeColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nativeColumns"] = boost::any(temp1);
    }
    if (odpsPropertiesRolearn) {
      res["odpsPropertiesRolearn"] = boost::any(*odpsPropertiesRolearn);
    }
    if (odpsSqlTextOptionFlushHeader) {
      res["odpsSqlTextOptionFlushHeader"] = boost::any(*odpsSqlTextOptionFlushHeader);
    }
    if (odpsTextOptionHeaderLinesCount) {
      res["odpsTextOptionHeaderLinesCount"] = boost::any(*odpsTextOptionHeaderLinesCount);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitionColumns) {
      vector<boost::any> temp1;
      for(auto item1:*partitionColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["partitionColumns"] = boost::any(temp1);
    }
    if (physicalSize) {
      res["physicalSize"] = boost::any(*physicalSize);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (rewriteEnabled) {
      res["rewriteEnabled"] = boost::any(*rewriteEnabled);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (storageHandler) {
      res["storageHandler"] = boost::any(*storageHandler);
    }
    if (tableLabel) {
      res["tableLabel"] = boost::any(*tableLabel);
    }
    if (tablesotreTableName) {
      res["tablesotreTableName"] = boost::any(*tablesotreTableName);
    }
    if (tablestoreColumnsMapping) {
      res["tablestoreColumnsMapping"] = boost::any(*tablestoreColumnsMapping);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (viewText) {
      res["viewText"] = boost::any(*viewText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRefreshEnabled") != m.end() && !m["autoRefreshEnabled"].empty()) {
      autoRefreshEnabled = make_shared<bool>(boost::any_cast<bool>(m["autoRefreshEnabled"]));
    }
    if (m.find("clusterInfo") != m.end() && !m["clusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["clusterInfo"].type()) {
        GetTableInfoResponseBodyDataClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["clusterInfo"]));
        clusterInfo = make_shared<GetTableInfoResponseBodyDataClusterInfo>(model1);
      }
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("createTableDDL") != m.end() && !m["createTableDDL"].empty()) {
      createTableDDL = make_shared<string>(boost::any_cast<string>(m["createTableDDL"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("fileNum") != m.end() && !m["fileNum"].empty()) {
      fileNum = make_shared<long>(boost::any_cast<long>(m["fileNum"]));
    }
    if (m.find("isExternalTable") != m.end() && !m["isExternalTable"].empty()) {
      isExternalTable = make_shared<bool>(boost::any_cast<bool>(m["isExternalTable"]));
    }
    if (m.find("isOutdated") != m.end() && !m["isOutdated"].empty()) {
      isOutdated = make_shared<bool>(boost::any_cast<bool>(m["isOutdated"]));
    }
    if (m.find("lastAccessTime") != m.end() && !m["lastAccessTime"].empty()) {
      lastAccessTime = make_shared<long>(boost::any_cast<long>(m["lastAccessTime"]));
    }
    if (m.find("lastDDLTime") != m.end() && !m["lastDDLTime"].empty()) {
      lastDDLTime = make_shared<long>(boost::any_cast<long>(m["lastDDLTime"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("lifecycle") != m.end() && !m["lifecycle"].empty()) {
      lifecycle = make_shared<string>(boost::any_cast<string>(m["lifecycle"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("materializedView") != m.end() && !m["materializedView"].empty()) {
      materializedView = make_shared<bool>(boost::any_cast<bool>(m["materializedView"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nativeColumns") != m.end() && !m["nativeColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["nativeColumns"].type()) {
        vector<GetTableInfoResponseBodyDataNativeColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nativeColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableInfoResponseBodyDataNativeColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nativeColumns = make_shared<vector<GetTableInfoResponseBodyDataNativeColumns>>(expect1);
      }
    }
    if (m.find("odpsPropertiesRolearn") != m.end() && !m["odpsPropertiesRolearn"].empty()) {
      odpsPropertiesRolearn = make_shared<string>(boost::any_cast<string>(m["odpsPropertiesRolearn"]));
    }
    if (m.find("odpsSqlTextOptionFlushHeader") != m.end() && !m["odpsSqlTextOptionFlushHeader"].empty()) {
      odpsSqlTextOptionFlushHeader = make_shared<bool>(boost::any_cast<bool>(m["odpsSqlTextOptionFlushHeader"]));
    }
    if (m.find("odpsTextOptionHeaderLinesCount") != m.end() && !m["odpsTextOptionHeaderLinesCount"].empty()) {
      odpsTextOptionHeaderLinesCount = make_shared<long>(boost::any_cast<long>(m["odpsTextOptionHeaderLinesCount"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitionColumns") != m.end() && !m["partitionColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["partitionColumns"].type()) {
        vector<GetTableInfoResponseBodyDataPartitionColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["partitionColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableInfoResponseBodyDataPartitionColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partitionColumns = make_shared<vector<GetTableInfoResponseBodyDataPartitionColumns>>(expect1);
      }
    }
    if (m.find("physicalSize") != m.end() && !m["physicalSize"].empty()) {
      physicalSize = make_shared<long>(boost::any_cast<long>(m["physicalSize"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("rewriteEnabled") != m.end() && !m["rewriteEnabled"].empty()) {
      rewriteEnabled = make_shared<bool>(boost::any_cast<bool>(m["rewriteEnabled"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("storageHandler") != m.end() && !m["storageHandler"].empty()) {
      storageHandler = make_shared<string>(boost::any_cast<string>(m["storageHandler"]));
    }
    if (m.find("tableLabel") != m.end() && !m["tableLabel"].empty()) {
      tableLabel = make_shared<string>(boost::any_cast<string>(m["tableLabel"]));
    }
    if (m.find("tablesotreTableName") != m.end() && !m["tablesotreTableName"].empty()) {
      tablesotreTableName = make_shared<string>(boost::any_cast<string>(m["tablesotreTableName"]));
    }
    if (m.find("tablestoreColumnsMapping") != m.end() && !m["tablestoreColumnsMapping"].empty()) {
      tablestoreColumnsMapping = make_shared<string>(boost::any_cast<string>(m["tablestoreColumnsMapping"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("viewText") != m.end() && !m["viewText"].empty()) {
      viewText = make_shared<string>(boost::any_cast<string>(m["viewText"]));
    }
  }


  virtual ~GetTableInfoResponseBodyData() = default;
};
class GetTableInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTableInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetTableInfoResponseBody() {}

  explicit GetTableInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTableInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTableInfoResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetTableInfoResponseBody() = default;
};
class GetTableInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableInfoResponseBody> body{};

  GetTableInfoResponse() {}

  explicit GetTableInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableInfoResponse() = default;
};
class GetTrustedProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> requestId{};

  GetTrustedProjectsResponseBody() {}

  explicit GetTrustedProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetTrustedProjectsResponseBody() = default;
};
class GetTrustedProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrustedProjectsResponseBody> body{};

  GetTrustedProjectsResponse() {}

  explicit GetTrustedProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTrustedProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrustedProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrustedProjectsResponse() = default;
};
class KillJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  KillJobsRequest() {}

  explicit KillJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~KillJobsRequest() = default;
};
class KillJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  KillJobsResponseBody() {}

  explicit KillJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~KillJobsResponseBody() = default;
};
class KillJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillJobsResponseBody> body{};

  KillJobsResponse() {}

  explicit KillJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        KillJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillJobsResponseBody>(model1);
      }
    }
  }


  virtual ~KillJobsResponse() = default;
};
class ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList() {}

  explicit ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList() = default;
};
class ListComputeQuotaPlanResponseBodyDataPlanListQuota : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListComputeQuotaPlanResponseBodyDataPlanListQuota() {}

  explicit ListComputeQuotaPlanResponseBodyDataPlanListQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListComputeQuotaPlanResponseBodyDataPlanListQuota() = default;
};
class ListComputeQuotaPlanResponseBodyDataPlanList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<ListComputeQuotaPlanResponseBodyDataPlanListQuota> quota{};

  ListComputeQuotaPlanResponseBodyDataPlanList() {}

  explicit ListComputeQuotaPlanResponseBodyDataPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ListComputeQuotaPlanResponseBodyDataPlanListQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ListComputeQuotaPlanResponseBodyDataPlanListQuota>(model1);
      }
    }
  }


  virtual ~ListComputeQuotaPlanResponseBodyDataPlanList() = default;
};
class ListComputeQuotaPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListComputeQuotaPlanResponseBodyDataPlanList>> planList{};

  ListComputeQuotaPlanResponseBodyData() {}

  explicit ListComputeQuotaPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planList) {
      vector<boost::any> temp1;
      for(auto item1:*planList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["planList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("planList") != m.end() && !m["planList"].empty()) {
      if (typeid(vector<boost::any>) == m["planList"].type()) {
        vector<ListComputeQuotaPlanResponseBodyDataPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["planList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComputeQuotaPlanResponseBodyDataPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planList = make_shared<vector<ListComputeQuotaPlanResponseBodyDataPlanList>>(expect1);
      }
    }
  }


  virtual ~ListComputeQuotaPlanResponseBodyData() = default;
};
class ListComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListComputeQuotaPlanResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ListComputeQuotaPlanResponseBody() {}

  explicit ListComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListComputeQuotaPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListComputeQuotaPlanResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListComputeQuotaPlanResponseBody() = default;
};
class ListComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListComputeQuotaPlanResponseBody> body{};

  ListComputeQuotaPlanResponse() {}

  explicit ListComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ListComputeQuotaPlanResponse() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> schemaName{};

  ListFunctionsRequest() {}

  explicit ListFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponseBodyDataFunctions : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> resources{};
  shared_ptr<string> schema{};

  ListFunctionsResponseBodyDataFunctions() {}

  explicit ListFunctionsResponseBodyDataFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["class"] = boost::any(*class_);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("class") != m.end() && !m["class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["class"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
  }


  virtual ~ListFunctionsResponseBodyDataFunctions() = default;
};
class ListFunctionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionsResponseBodyDataFunctions>> functions{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};

  ListFunctionsResponseBodyData() {}

  explicit ListFunctionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functions) {
      vector<boost::any> temp1;
      for(auto item1:*functions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functions"] = boost::any(temp1);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functions") != m.end() && !m["functions"].empty()) {
      if (typeid(vector<boost::any>) == m["functions"].type()) {
        vector<ListFunctionsResponseBodyDataFunctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionsResponseBodyDataFunctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<ListFunctionsResponseBodyDataFunctions>>(expect1);
      }
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
  }


  virtual ~ListFunctionsResponseBodyData() = default;
};
class ListFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFunctionsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListFunctionsResponseBody() {}

  explicit ListFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListFunctionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListFunctionsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListFunctionsResponseBody() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsResponseBody> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListJobInfosRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ascOrder{};
  shared_ptr<vector<string>> extNodeIdList{};
  shared_ptr<long> from{};
  shared_ptr<vector<string>> instanceIdList{};
  shared_ptr<vector<string>> jobOwnerList{};
  shared_ptr<vector<long>> priorityList{};
  shared_ptr<vector<string>> projectList{};
  shared_ptr<string> quotaNickname{};
  shared_ptr<vector<string>> sceneTagList{};
  shared_ptr<vector<string>> signatureList{};
  shared_ptr<vector<string>> sortByList{};
  shared_ptr<vector<string>> sortOrderList{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<long> to{};
  shared_ptr<vector<string>> typeList{};
  shared_ptr<string> orderColumn{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  ListJobInfosRequest() {}

  explicit ListJobInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ascOrder) {
      res["ascOrder"] = boost::any(*ascOrder);
    }
    if (extNodeIdList) {
      res["extNodeIdList"] = boost::any(*extNodeIdList);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (instanceIdList) {
      res["instanceIdList"] = boost::any(*instanceIdList);
    }
    if (jobOwnerList) {
      res["jobOwnerList"] = boost::any(*jobOwnerList);
    }
    if (priorityList) {
      res["priorityList"] = boost::any(*priorityList);
    }
    if (projectList) {
      res["projectList"] = boost::any(*projectList);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    if (sceneTagList) {
      res["sceneTagList"] = boost::any(*sceneTagList);
    }
    if (signatureList) {
      res["signatureList"] = boost::any(*signatureList);
    }
    if (sortByList) {
      res["sortByList"] = boost::any(*sortByList);
    }
    if (sortOrderList) {
      res["sortOrderList"] = boost::any(*sortOrderList);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (typeList) {
      res["typeList"] = boost::any(*typeList);
    }
    if (orderColumn) {
      res["orderColumn"] = boost::any(*orderColumn);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ascOrder") != m.end() && !m["ascOrder"].empty()) {
      ascOrder = make_shared<bool>(boost::any_cast<bool>(m["ascOrder"]));
    }
    if (m.find("extNodeIdList") != m.end() && !m["extNodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["extNodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["extNodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extNodeIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("instanceIdList") != m.end() && !m["instanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jobOwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jobOwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobOwnerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("priorityList") != m.end() && !m["priorityList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["priorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["priorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      priorityList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("projectList") != m.end() && !m["projectList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["projectList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["projectList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
    if (m.find("sceneTagList") != m.end() && !m["sceneTagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sceneTagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sceneTagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneTagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("signatureList") != m.end() && !m["signatureList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["signatureList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["signatureList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      signatureList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sortByList") != m.end() && !m["sortByList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sortByList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sortByList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sortByList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sortOrderList") != m.end() && !m["sortOrderList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sortOrderList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sortOrderList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sortOrderList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["statusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["statusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("typeList") != m.end() && !m["typeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["typeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["typeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      typeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("orderColumn") != m.end() && !m["orderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["orderColumn"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListJobInfosRequest() = default;
};
class ListJobInfosResponseBodyDataJobInfoListSceneResults : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> params{};
  shared_ptr<string> scene{};
  shared_ptr<string> sceneTag{};
  shared_ptr<string> summary{};
  shared_ptr<string> type{};

  ListJobInfosResponseBodyDataJobInfoListSceneResults() {}

  explicit ListJobInfosResponseBodyDataJobInfoListSceneResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (sceneTag) {
      res["sceneTag"] = boost::any(*sceneTag);
    }
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["params"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("sceneTag") != m.end() && !m["sceneTag"].empty()) {
      sceneTag = make_shared<string>(boost::any_cast<string>(m["sceneTag"]));
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["summary"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListJobInfosResponseBodyDataJobInfoListSceneResults() = default;
};
class ListJobInfosResponseBodyDataJobInfoList : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> cuSnapshot{};
  shared_ptr<long> cuUsage{};
  shared_ptr<long> endAtTime{};
  shared_ptr<string> extNodeId{};
  shared_ptr<string> extNodeOnDuty{};
  shared_ptr<string> extPlantFrom{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobOwner{};
  shared_ptr<string> jobType{};
  shared_ptr<double> memorySnapshot{};
  shared_ptr<long> memoryUsage{};
  shared_ptr<long> priority{};
  shared_ptr<string> project{};
  shared_ptr<string> quotaNickname{};
  shared_ptr<string> quotaType{};
  shared_ptr<string> region{};
  shared_ptr<long> runningAtTime{};
  shared_ptr<long> runningTime{};
  shared_ptr<vector<ListJobInfosResponseBodyDataJobInfoListSceneResults>> sceneResults{};
  shared_ptr<string> signature{};
  shared_ptr<string> status{};
  shared_ptr<string> statusSnapshot{};
  shared_ptr<long> submittedAtTime{};
  shared_ptr<string> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> totalTime{};
  shared_ptr<long> waitingTime{};

  ListJobInfosResponseBodyDataJobInfoList() {}

  explicit ListJobInfosResponseBodyDataJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (cuSnapshot) {
      res["cuSnapshot"] = boost::any(*cuSnapshot);
    }
    if (cuUsage) {
      res["cuUsage"] = boost::any(*cuUsage);
    }
    if (endAtTime) {
      res["endAtTime"] = boost::any(*endAtTime);
    }
    if (extNodeId) {
      res["extNodeId"] = boost::any(*extNodeId);
    }
    if (extNodeOnDuty) {
      res["extNodeOnDuty"] = boost::any(*extNodeOnDuty);
    }
    if (extPlantFrom) {
      res["extPlantFrom"] = boost::any(*extPlantFrom);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (jobOwner) {
      res["jobOwner"] = boost::any(*jobOwner);
    }
    if (jobType) {
      res["jobType"] = boost::any(*jobType);
    }
    if (memorySnapshot) {
      res["memorySnapshot"] = boost::any(*memorySnapshot);
    }
    if (memoryUsage) {
      res["memoryUsage"] = boost::any(*memoryUsage);
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    if (quotaType) {
      res["quotaType"] = boost::any(*quotaType);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (runningAtTime) {
      res["runningAtTime"] = boost::any(*runningAtTime);
    }
    if (runningTime) {
      res["runningTime"] = boost::any(*runningTime);
    }
    if (sceneResults) {
      vector<boost::any> temp1;
      for(auto item1:*sceneResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sceneResults"] = boost::any(temp1);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusSnapshot) {
      res["statusSnapshot"] = boost::any(*statusSnapshot);
    }
    if (submittedAtTime) {
      res["submittedAtTime"] = boost::any(*submittedAtTime);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (totalTime) {
      res["totalTime"] = boost::any(*totalTime);
    }
    if (waitingTime) {
      res["waitingTime"] = boost::any(*waitingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("cuSnapshot") != m.end() && !m["cuSnapshot"].empty()) {
      cuSnapshot = make_shared<double>(boost::any_cast<double>(m["cuSnapshot"]));
    }
    if (m.find("cuUsage") != m.end() && !m["cuUsage"].empty()) {
      cuUsage = make_shared<long>(boost::any_cast<long>(m["cuUsage"]));
    }
    if (m.find("endAtTime") != m.end() && !m["endAtTime"].empty()) {
      endAtTime = make_shared<long>(boost::any_cast<long>(m["endAtTime"]));
    }
    if (m.find("extNodeId") != m.end() && !m["extNodeId"].empty()) {
      extNodeId = make_shared<string>(boost::any_cast<string>(m["extNodeId"]));
    }
    if (m.find("extNodeOnDuty") != m.end() && !m["extNodeOnDuty"].empty()) {
      extNodeOnDuty = make_shared<string>(boost::any_cast<string>(m["extNodeOnDuty"]));
    }
    if (m.find("extPlantFrom") != m.end() && !m["extPlantFrom"].empty()) {
      extPlantFrom = make_shared<string>(boost::any_cast<string>(m["extPlantFrom"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("jobOwner") != m.end() && !m["jobOwner"].empty()) {
      jobOwner = make_shared<string>(boost::any_cast<string>(m["jobOwner"]));
    }
    if (m.find("jobType") != m.end() && !m["jobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["jobType"]));
    }
    if (m.find("memorySnapshot") != m.end() && !m["memorySnapshot"].empty()) {
      memorySnapshot = make_shared<double>(boost::any_cast<double>(m["memorySnapshot"]));
    }
    if (m.find("memoryUsage") != m.end() && !m["memoryUsage"].empty()) {
      memoryUsage = make_shared<long>(boost::any_cast<long>(m["memoryUsage"]));
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
    if (m.find("quotaType") != m.end() && !m["quotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["quotaType"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("runningAtTime") != m.end() && !m["runningAtTime"].empty()) {
      runningAtTime = make_shared<long>(boost::any_cast<long>(m["runningAtTime"]));
    }
    if (m.find("runningTime") != m.end() && !m["runningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["runningTime"]));
    }
    if (m.find("sceneResults") != m.end() && !m["sceneResults"].empty()) {
      if (typeid(vector<boost::any>) == m["sceneResults"].type()) {
        vector<ListJobInfosResponseBodyDataJobInfoListSceneResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sceneResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobInfosResponseBodyDataJobInfoListSceneResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneResults = make_shared<vector<ListJobInfosResponseBodyDataJobInfoListSceneResults>>(expect1);
      }
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusSnapshot") != m.end() && !m["statusSnapshot"].empty()) {
      statusSnapshot = make_shared<string>(boost::any_cast<string>(m["statusSnapshot"]));
    }
    if (m.find("submittedAtTime") != m.end() && !m["submittedAtTime"].empty()) {
      submittedAtTime = make_shared<long>(boost::any_cast<long>(m["submittedAtTime"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("totalTime") != m.end() && !m["totalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["totalTime"]));
    }
    if (m.find("waitingTime") != m.end() && !m["waitingTime"].empty()) {
      waitingTime = make_shared<long>(boost::any_cast<long>(m["waitingTime"]));
    }
  }


  virtual ~ListJobInfosResponseBodyDataJobInfoList() = default;
};
class ListJobInfosResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobInfosResponseBodyDataJobInfoList>> jobInfoList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListJobInfosResponseBodyData() {}

  explicit ListJobInfosResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobInfoList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobInfoList") != m.end() && !m["jobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["jobInfoList"].type()) {
        vector<ListJobInfosResponseBodyDataJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobInfosResponseBodyDataJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfoList = make_shared<vector<ListJobInfosResponseBodyDataJobInfoList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListJobInfosResponseBodyData() = default;
};
class ListJobInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListJobInfosResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ListJobInfosResponseBody() {}

  explicit ListJobInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListJobInfosResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListJobInfosResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListJobInfosResponseBody() = default;
};
class ListJobInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobInfosResponseBody> body{};

  ListJobInfosResponse() {}

  explicit ListJobInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobInfosResponse() = default;
};
class ListMmsDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> type{};

  ListMmsDataSourcesRequest() {}

  explicit ListMmsDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsDataSourcesRequest() = default;
};
class ListMmsDataSourcesResponseBodyDataObjectListConfig : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<vector<string>> enums{};
  shared_ptr<string> group{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> placeHolder{};
  shared_ptr<bool> required{};
  shared_ptr<string> subType{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  ListMmsDataSourcesResponseBodyDataObjectListConfig() {}

  explicit ListMmsDataSourcesResponseBodyDataObjectListConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enums) {
      res["enums"] = boost::any(*enums);
    }
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (placeHolder) {
      res["placeHolder"] = boost::any(*placeHolder);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (subType) {
      res["subType"] = boost::any(*subType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enums") != m.end() && !m["enums"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enums"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enums"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enums = make_shared<vector<string>>(toVec1);
    }
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("placeHolder") != m.end() && !m["placeHolder"].empty()) {
      placeHolder = make_shared<string>(boost::any_cast<string>(m["placeHolder"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("subType") != m.end() && !m["subType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["subType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~ListMmsDataSourcesResponseBodyDataObjectListConfig() = default;
};
class ListMmsDataSourcesResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<bool> agentIsOnline{};
  shared_ptr<vector<ListMmsDataSourcesResponseBodyDataObjectListConfig>> config{};
  shared_ptr<string> createTime{};
  shared_ptr<long> dbNum{};
  shared_ptr<string> errMsg{};
  shared_ptr<long> id{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> name{};
  shared_ptr<string> networklink{};
  shared_ptr<long> partitionNum{};
  shared_ptr<long> partitionsDoingNum{};
  shared_ptr<long> partitionsDoneNum{};
  shared_ptr<long> partitionsFailedNum{};
  shared_ptr<string> region{};
  shared_ptr<long> scanId{};
  shared_ptr<string> status{};
  shared_ptr<long> tableNum{};
  shared_ptr<long> tablesDoingNum{};
  shared_ptr<long> tablesDoneNum{};
  shared_ptr<long> tablesFailedNum{};
  shared_ptr<long> tablesPartDoneNum{};
  shared_ptr<string> type{};

  ListMmsDataSourcesResponseBodyDataObjectList() {}

  explicit ListMmsDataSourcesResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentIsOnline) {
      res["agentIsOnline"] = boost::any(*agentIsOnline);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbNum) {
      res["dbNum"] = boost::any(*dbNum);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastUpdateTime) {
      res["lastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networklink) {
      res["networklink"] = boost::any(*networklink);
    }
    if (partitionNum) {
      res["partitionNum"] = boost::any(*partitionNum);
    }
    if (partitionsDoingNum) {
      res["partitionsDoingNum"] = boost::any(*partitionsDoingNum);
    }
    if (partitionsDoneNum) {
      res["partitionsDoneNum"] = boost::any(*partitionsDoneNum);
    }
    if (partitionsFailedNum) {
      res["partitionsFailedNum"] = boost::any(*partitionsFailedNum);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (scanId) {
      res["scanId"] = boost::any(*scanId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableNum) {
      res["tableNum"] = boost::any(*tableNum);
    }
    if (tablesDoingNum) {
      res["tablesDoingNum"] = boost::any(*tablesDoingNum);
    }
    if (tablesDoneNum) {
      res["tablesDoneNum"] = boost::any(*tablesDoneNum);
    }
    if (tablesFailedNum) {
      res["tablesFailedNum"] = boost::any(*tablesFailedNum);
    }
    if (tablesPartDoneNum) {
      res["tablesPartDoneNum"] = boost::any(*tablesPartDoneNum);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentIsOnline") != m.end() && !m["agentIsOnline"].empty()) {
      agentIsOnline = make_shared<bool>(boost::any_cast<bool>(m["agentIsOnline"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<ListMmsDataSourcesResponseBodyDataObjectListConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsDataSourcesResponseBodyDataObjectListConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<ListMmsDataSourcesResponseBodyDataObjectListConfig>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbNum") != m.end() && !m["dbNum"].empty()) {
      dbNum = make_shared<long>(boost::any_cast<long>(m["dbNum"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastUpdateTime") != m.end() && !m["lastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["lastUpdateTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networklink") != m.end() && !m["networklink"].empty()) {
      networklink = make_shared<string>(boost::any_cast<string>(m["networklink"]));
    }
    if (m.find("partitionNum") != m.end() && !m["partitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["partitionNum"]));
    }
    if (m.find("partitionsDoingNum") != m.end() && !m["partitionsDoingNum"].empty()) {
      partitionsDoingNum = make_shared<long>(boost::any_cast<long>(m["partitionsDoingNum"]));
    }
    if (m.find("partitionsDoneNum") != m.end() && !m["partitionsDoneNum"].empty()) {
      partitionsDoneNum = make_shared<long>(boost::any_cast<long>(m["partitionsDoneNum"]));
    }
    if (m.find("partitionsFailedNum") != m.end() && !m["partitionsFailedNum"].empty()) {
      partitionsFailedNum = make_shared<long>(boost::any_cast<long>(m["partitionsFailedNum"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("scanId") != m.end() && !m["scanId"].empty()) {
      scanId = make_shared<long>(boost::any_cast<long>(m["scanId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableNum") != m.end() && !m["tableNum"].empty()) {
      tableNum = make_shared<long>(boost::any_cast<long>(m["tableNum"]));
    }
    if (m.find("tablesDoingNum") != m.end() && !m["tablesDoingNum"].empty()) {
      tablesDoingNum = make_shared<long>(boost::any_cast<long>(m["tablesDoingNum"]));
    }
    if (m.find("tablesDoneNum") != m.end() && !m["tablesDoneNum"].empty()) {
      tablesDoneNum = make_shared<long>(boost::any_cast<long>(m["tablesDoneNum"]));
    }
    if (m.find("tablesFailedNum") != m.end() && !m["tablesFailedNum"].empty()) {
      tablesFailedNum = make_shared<long>(boost::any_cast<long>(m["tablesFailedNum"]));
    }
    if (m.find("tablesPartDoneNum") != m.end() && !m["tablesPartDoneNum"].empty()) {
      tablesPartDoneNum = make_shared<long>(boost::any_cast<long>(m["tablesPartDoneNum"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsDataSourcesResponseBodyDataObjectList() = default;
};
class ListMmsDataSourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsDataSourcesResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsDataSourcesResponseBodyData() {}

  explicit ListMmsDataSourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsDataSourcesResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsDataSourcesResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsDataSourcesResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsDataSourcesResponseBodyData() = default;
};
class ListMmsDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsDataSourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsDataSourcesResponseBody() {}

  explicit ListMmsDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsDataSourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsDataSourcesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsDataSourcesResponseBody() = default;
};
class ListMmsDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsDataSourcesResponseBody> body{};

  ListMmsDataSourcesResponse() {}

  explicit ListMmsDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsDataSourcesResponse() = default;
};
class ListMmsDbsRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> numRows{};
  shared_ptr<string> size{};
  shared_ptr<string> updateTime{};

  ListMmsDbsRequestSorter() {}

  explicit ListMmsDbsRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<string>(boost::any_cast<string>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListMmsDbsRequestSorter() = default;
};
class ListMmsDbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListMmsDbsRequestSorter> sorter{};
  shared_ptr<string> status{};

  ListMmsDbsRequest() {}

  explicit ListMmsDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsDbsRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsDbsRequestSorter>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListMmsDbsRequest() = default;
};
class ListMmsDbsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sorterShrink{};
  shared_ptr<string> status{};

  ListMmsDbsShrinkRequest() {}

  explicit ListMmsDbsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sorterShrink) {
      res["sorter"] = boost::any(*sorterShrink);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      sorterShrink = make_shared<string>(boost::any_cast<string>(m["sorter"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListMmsDbsShrinkRequest() = default;
};
class ListMmsDbsResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> description{};
  shared_ptr<string> extra{};
  shared_ptr<long> id{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<long> numRows{};
  shared_ptr<string> owner{};
  shared_ptr<long> partitions{};
  shared_ptr<long> partitionsDoing{};
  shared_ptr<long> partitionsDone{};
  shared_ptr<long> partitionsFailed{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<long> tables{};
  shared_ptr<long> tablesDoing{};
  shared_ptr<long> tablesDone{};
  shared_ptr<long> tablesFailed{};
  shared_ptr<long> tablesPartDone{};
  shared_ptr<string> updateTime{};
  shared_ptr<bool> updated{};

  ListMmsDbsResponseBodyDataObjectList() {}

  explicit ListMmsDbsResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["deleted"] = boost::any(*deleted);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    if (partitionsDoing) {
      res["partitionsDoing"] = boost::any(*partitionsDoing);
    }
    if (partitionsDone) {
      res["partitionsDone"] = boost::any(*partitionsDone);
    }
    if (partitionsFailed) {
      res["partitionsFailed"] = boost::any(*partitionsFailed);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tables) {
      res["tables"] = boost::any(*tables);
    }
    if (tablesDoing) {
      res["tablesDoing"] = boost::any(*tablesDoing);
    }
    if (tablesDone) {
      res["tablesDone"] = boost::any(*tablesDone);
    }
    if (tablesFailed) {
      res["tablesFailed"] = boost::any(*tablesFailed);
    }
    if (tablesPartDone) {
      res["tablesPartDone"] = boost::any(*tablesPartDone);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("deleted") != m.end() && !m["deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["deleted"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      partitions = make_shared<long>(boost::any_cast<long>(m["partitions"]));
    }
    if (m.find("partitionsDoing") != m.end() && !m["partitionsDoing"].empty()) {
      partitionsDoing = make_shared<long>(boost::any_cast<long>(m["partitionsDoing"]));
    }
    if (m.find("partitionsDone") != m.end() && !m["partitionsDone"].empty()) {
      partitionsDone = make_shared<long>(boost::any_cast<long>(m["partitionsDone"]));
    }
    if (m.find("partitionsFailed") != m.end() && !m["partitionsFailed"].empty()) {
      partitionsFailed = make_shared<long>(boost::any_cast<long>(m["partitionsFailed"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      tables = make_shared<long>(boost::any_cast<long>(m["tables"]));
    }
    if (m.find("tablesDoing") != m.end() && !m["tablesDoing"].empty()) {
      tablesDoing = make_shared<long>(boost::any_cast<long>(m["tablesDoing"]));
    }
    if (m.find("tablesDone") != m.end() && !m["tablesDone"].empty()) {
      tablesDone = make_shared<long>(boost::any_cast<long>(m["tablesDone"]));
    }
    if (m.find("tablesFailed") != m.end() && !m["tablesFailed"].empty()) {
      tablesFailed = make_shared<long>(boost::any_cast<long>(m["tablesFailed"]));
    }
    if (m.find("tablesPartDone") != m.end() && !m["tablesPartDone"].empty()) {
      tablesPartDone = make_shared<long>(boost::any_cast<long>(m["tablesPartDone"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
  }


  virtual ~ListMmsDbsResponseBodyDataObjectList() = default;
};
class ListMmsDbsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsDbsResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsDbsResponseBodyData() {}

  explicit ListMmsDbsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsDbsResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsDbsResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsDbsResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsDbsResponseBodyData() = default;
};
class ListMmsDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsDbsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsDbsResponseBody() {}

  explicit ListMmsDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsDbsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsDbsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsDbsResponseBody() = default;
};
class ListMmsDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsDbsResponseBody> body{};

  ListMmsDbsResponse() {}

  explicit ListMmsDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsDbsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsDbsResponse() = default;
};
class ListMmsJobsRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  ListMmsJobsRequestSorter() {}

  explicit ListMmsJobsRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListMmsJobsRequestSorter() = default;
};
class ListMmsJobsRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsJobsRequestSorter> sorter{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstTableName{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcTableName{};
  shared_ptr<string> status{};
  shared_ptr<long> stopped{};

  ListMmsJobsRequest() {}

  explicit ListMmsJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstTableName) {
      res["dstTableName"] = boost::any(*dstTableName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcTableName) {
      res["srcTableName"] = boost::any(*srcTableName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stopped) {
      res["stopped"] = boost::any(*stopped);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsJobsRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsJobsRequestSorter>(model1);
      }
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstTableName") != m.end() && !m["dstTableName"].empty()) {
      dstTableName = make_shared<string>(boost::any_cast<string>(m["dstTableName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcTableName") != m.end() && !m["srcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["srcTableName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stopped") != m.end() && !m["stopped"].empty()) {
      stopped = make_shared<long>(boost::any_cast<long>(m["stopped"]));
    }
  }


  virtual ~ListMmsJobsRequest() = default;
};
class ListMmsJobsResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstSchemaName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcSchemaName{};
  shared_ptr<string> status{};
  shared_ptr<bool> stopped{};
  shared_ptr<long> taskDone{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> type{};

  ListMmsJobsResponseBodyDataObjectList() {}

  explicit ListMmsJobsResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstSchemaName) {
      res["dstSchemaName"] = boost::any(*dstSchemaName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcSchemaName) {
      res["srcSchemaName"] = boost::any(*srcSchemaName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stopped) {
      res["stopped"] = boost::any(*stopped);
    }
    if (taskDone) {
      res["taskDone"] = boost::any(*taskDone);
    }
    if (taskNum) {
      res["taskNum"] = boost::any(*taskNum);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstSchemaName") != m.end() && !m["dstSchemaName"].empty()) {
      dstSchemaName = make_shared<string>(boost::any_cast<string>(m["dstSchemaName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcSchemaName") != m.end() && !m["srcSchemaName"].empty()) {
      srcSchemaName = make_shared<string>(boost::any_cast<string>(m["srcSchemaName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stopped") != m.end() && !m["stopped"].empty()) {
      stopped = make_shared<bool>(boost::any_cast<bool>(m["stopped"]));
    }
    if (m.find("taskDone") != m.end() && !m["taskDone"].empty()) {
      taskDone = make_shared<long>(boost::any_cast<long>(m["taskDone"]));
    }
    if (m.find("taskNum") != m.end() && !m["taskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["taskNum"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsJobsResponseBodyDataObjectList() = default;
};
class ListMmsJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsJobsResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsJobsResponseBodyData() {}

  explicit ListMmsJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsJobsResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsJobsResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsJobsResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsJobsResponseBodyData() = default;
};
class ListMmsJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsJobsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsJobsResponseBody() {}

  explicit ListMmsJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsJobsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsJobsResponseBody() = default;
};
class ListMmsJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsJobsResponseBody> body{};

  ListMmsJobsResponse() {}

  explicit ListMmsJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsJobsResponse() = default;
};
class ListMmsPartitionsRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> numRows{};
  shared_ptr<string> size{};

  ListMmsPartitionsRequestSorter() {}

  explicit ListMmsPartitionsRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<string>(boost::any_cast<string>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
  }


  virtual ~ListMmsPartitionsRequestSorter() = default;
};
class ListMmsPartitionsRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsPartitionsRequestSorter> sorter{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> lastDdlTimeEnd{};
  shared_ptr<string> lastDdlTimeStart{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> status{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> updated{};
  shared_ptr<string> value{};

  ListMmsPartitionsRequest() {}

  explicit ListMmsPartitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (lastDdlTimeEnd) {
      res["lastDdlTimeEnd"] = boost::any(*lastDdlTimeEnd);
    }
    if (lastDdlTimeStart) {
      res["lastDdlTimeStart"] = boost::any(*lastDdlTimeStart);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsPartitionsRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsPartitionsRequestSorter>(model1);
      }
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("lastDdlTimeEnd") != m.end() && !m["lastDdlTimeEnd"].empty()) {
      lastDdlTimeEnd = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeEnd"]));
    }
    if (m.find("lastDdlTimeStart") != m.end() && !m["lastDdlTimeStart"].empty()) {
      lastDdlTimeStart = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeStart"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListMmsPartitionsRequest() = default;
};
class ListMmsPartitionsShrinkRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> numRows{};
  shared_ptr<string> size{};

  ListMmsPartitionsShrinkRequestSorter() {}

  explicit ListMmsPartitionsShrinkRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<string>(boost::any_cast<string>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
  }


  virtual ~ListMmsPartitionsShrinkRequestSorter() = default;
};
class ListMmsPartitionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsPartitionsShrinkRequestSorter> sorter{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> lastDdlTimeEnd{};
  shared_ptr<string> lastDdlTimeStart{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> statusShrink{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> updated{};
  shared_ptr<string> value{};

  ListMmsPartitionsShrinkRequest() {}

  explicit ListMmsPartitionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (lastDdlTimeEnd) {
      res["lastDdlTimeEnd"] = boost::any(*lastDdlTimeEnd);
    }
    if (lastDdlTimeStart) {
      res["lastDdlTimeStart"] = boost::any(*lastDdlTimeStart);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (statusShrink) {
      res["status"] = boost::any(*statusShrink);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsPartitionsShrinkRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsPartitionsShrinkRequestSorter>(model1);
      }
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("lastDdlTimeEnd") != m.end() && !m["lastDdlTimeEnd"].empty()) {
      lastDdlTimeEnd = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeEnd"]));
    }
    if (m.find("lastDdlTimeStart") != m.end() && !m["lastDdlTimeStart"].empty()) {
      lastDdlTimeStart = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeStart"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      statusShrink = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListMmsPartitionsShrinkRequest() = default;
};
class ListMmsPartitionsResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> id{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<long> numRows{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<long> tableId{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> updated{};
  shared_ptr<string> value{};

  ListMmsPartitionsResponseBodyDataObjectList() {}

  explicit ListMmsPartitionsResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableId) {
      res["tableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableId") != m.end() && !m["tableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["tableId"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListMmsPartitionsResponseBodyDataObjectList() = default;
};
class ListMmsPartitionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsPartitionsResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsPartitionsResponseBodyData() {}

  explicit ListMmsPartitionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsPartitionsResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsPartitionsResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsPartitionsResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsPartitionsResponseBodyData() = default;
};
class ListMmsPartitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsPartitionsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsPartitionsResponseBody() {}

  explicit ListMmsPartitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsPartitionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsPartitionsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsPartitionsResponseBody() = default;
};
class ListMmsPartitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsPartitionsResponseBody> body{};

  ListMmsPartitionsResponse() {}

  explicit ListMmsPartitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsPartitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsPartitionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsPartitionsResponse() = default;
};
class ListMmsTablesRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> numRows{};
  shared_ptr<string> size{};

  ListMmsTablesRequestSorter() {}

  explicit ListMmsTablesRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<string>(boost::any_cast<string>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
  }


  virtual ~ListMmsTablesRequestSorter() = default;
};
class ListMmsTablesRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsTablesRequestSorter> sorter{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> hasPartitions{};
  shared_ptr<string> lastDdlTimeEnd{};
  shared_ptr<string> lastDdlTimeStart{};
  shared_ptr<string> name{};
  shared_ptr<bool> onlyName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> status{};
  shared_ptr<string> type{};

  ListMmsTablesRequest() {}

  explicit ListMmsTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (hasPartitions) {
      res["hasPartitions"] = boost::any(*hasPartitions);
    }
    if (lastDdlTimeEnd) {
      res["lastDdlTimeEnd"] = boost::any(*lastDdlTimeEnd);
    }
    if (lastDdlTimeStart) {
      res["lastDdlTimeStart"] = boost::any(*lastDdlTimeStart);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (onlyName) {
      res["onlyName"] = boost::any(*onlyName);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsTablesRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsTablesRequestSorter>(model1);
      }
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("hasPartitions") != m.end() && !m["hasPartitions"].empty()) {
      hasPartitions = make_shared<bool>(boost::any_cast<bool>(m["hasPartitions"]));
    }
    if (m.find("lastDdlTimeEnd") != m.end() && !m["lastDdlTimeEnd"].empty()) {
      lastDdlTimeEnd = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeEnd"]));
    }
    if (m.find("lastDdlTimeStart") != m.end() && !m["lastDdlTimeStart"].empty()) {
      lastDdlTimeStart = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeStart"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("onlyName") != m.end() && !m["onlyName"].empty()) {
      onlyName = make_shared<bool>(boost::any_cast<bool>(m["onlyName"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsTablesRequest() = default;
};
class ListMmsTablesShrinkRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> numRows{};
  shared_ptr<string> size{};

  ListMmsTablesShrinkRequestSorter() {}

  explicit ListMmsTablesShrinkRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<string>(boost::any_cast<string>(m["numRows"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
  }


  virtual ~ListMmsTablesShrinkRequestSorter() = default;
};
class ListMmsTablesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsTablesShrinkRequestSorter> sorter{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> hasPartitions{};
  shared_ptr<string> lastDdlTimeEnd{};
  shared_ptr<string> lastDdlTimeStart{};
  shared_ptr<string> name{};
  shared_ptr<bool> onlyName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> statusShrink{};
  shared_ptr<string> type{};

  ListMmsTablesShrinkRequest() {}

  explicit ListMmsTablesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (hasPartitions) {
      res["hasPartitions"] = boost::any(*hasPartitions);
    }
    if (lastDdlTimeEnd) {
      res["lastDdlTimeEnd"] = boost::any(*lastDdlTimeEnd);
    }
    if (lastDdlTimeStart) {
      res["lastDdlTimeStart"] = boost::any(*lastDdlTimeStart);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (onlyName) {
      res["onlyName"] = boost::any(*onlyName);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (statusShrink) {
      res["status"] = boost::any(*statusShrink);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsTablesShrinkRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsTablesShrinkRequestSorter>(model1);
      }
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("hasPartitions") != m.end() && !m["hasPartitions"].empty()) {
      hasPartitions = make_shared<bool>(boost::any_cast<bool>(m["hasPartitions"]));
    }
    if (m.find("lastDdlTimeEnd") != m.end() && !m["lastDdlTimeEnd"].empty()) {
      lastDdlTimeEnd = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeEnd"]));
    }
    if (m.find("lastDdlTimeStart") != m.end() && !m["lastDdlTimeStart"].empty()) {
      lastDdlTimeStart = make_shared<string>(boost::any_cast<string>(m["lastDdlTimeStart"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("onlyName") != m.end() && !m["onlyName"].empty()) {
      onlyName = make_shared<bool>(boost::any_cast<bool>(m["onlyName"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      statusShrink = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsTablesShrinkRequest() = default;
};
class ListMmsTablesResponseBodyDataObjectListSchemaColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  ListMmsTablesResponseBodyDataObjectListSchemaColumns() {}

  explicit ListMmsTablesResponseBodyDataObjectListSchemaColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsTablesResponseBodyDataObjectListSchemaColumns() = default;
};
class ListMmsTablesResponseBodyDataObjectListSchemaPartitions : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  ListMmsTablesResponseBodyDataObjectListSchemaPartitions() {}

  explicit ListMmsTablesResponseBodyDataObjectListSchemaPartitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsTablesResponseBodyDataObjectListSchemaPartitions() = default;
};
class ListMmsTablesResponseBodyDataObjectListSchema : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsTablesResponseBodyDataObjectListSchemaColumns>> columns{};
  shared_ptr<string> comment{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListMmsTablesResponseBodyDataObjectListSchemaPartitions>> partitions{};

  ListMmsTablesResponseBodyDataObjectListSchema() {}

  explicit ListMmsTablesResponseBodyDataObjectListSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partitions) {
      vector<boost::any> temp1;
      for(auto item1:*partitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["partitions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<ListMmsTablesResponseBodyDataObjectListSchemaColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsTablesResponseBodyDataObjectListSchemaColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<ListMmsTablesResponseBodyDataObjectListSchemaColumns>>(expect1);
      }
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      if (typeid(vector<boost::any>) == m["partitions"].type()) {
        vector<ListMmsTablesResponseBodyDataObjectListSchemaPartitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["partitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsTablesResponseBodyDataObjectListSchemaPartitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partitions = make_shared<vector<ListMmsTablesResponseBodyDataObjectListSchemaPartitions>>(expect1);
      }
    }
  }


  virtual ~ListMmsTablesResponseBodyDataObjectListSchema() = default;
};
class ListMmsTablesResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> extra{};
  shared_ptr<bool> hasPartitions{};
  shared_ptr<long> id{};
  shared_ptr<string> inputFormat{};
  shared_ptr<string> lastDdlTime{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<long> numRows{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> owner{};
  shared_ptr<long> partitions{};
  shared_ptr<long> partitionsDoing{};
  shared_ptr<long> partitionsDone{};
  shared_ptr<long> partitionsFailed{};
  shared_ptr<ListMmsTablesResponseBodyDataObjectListSchema> schema{};
  shared_ptr<string> serde{};
  shared_ptr<long> size{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<bool> updated{};

  ListMmsTablesResponseBodyDataObjectList() {}

  explicit ListMmsTablesResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (hasPartitions) {
      res["hasPartitions"] = boost::any(*hasPartitions);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (inputFormat) {
      res["inputFormat"] = boost::any(*inputFormat);
    }
    if (lastDdlTime) {
      res["lastDdlTime"] = boost::any(*lastDdlTime);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (numRows) {
      res["numRows"] = boost::any(*numRows);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    if (partitionsDoing) {
      res["partitionsDoing"] = boost::any(*partitionsDoing);
    }
    if (partitionsDone) {
      res["partitionsDone"] = boost::any(*partitionsDone);
    }
    if (partitionsFailed) {
      res["partitionsFailed"] = boost::any(*partitionsFailed);
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serde) {
      res["serde"] = boost::any(*serde);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["dbName"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("hasPartitions") != m.end() && !m["hasPartitions"].empty()) {
      hasPartitions = make_shared<bool>(boost::any_cast<bool>(m["hasPartitions"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("inputFormat") != m.end() && !m["inputFormat"].empty()) {
      inputFormat = make_shared<string>(boost::any_cast<string>(m["inputFormat"]));
    }
    if (m.find("lastDdlTime") != m.end() && !m["lastDdlTime"].empty()) {
      lastDdlTime = make_shared<string>(boost::any_cast<string>(m["lastDdlTime"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("numRows") != m.end() && !m["numRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["numRows"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      partitions = make_shared<long>(boost::any_cast<long>(m["partitions"]));
    }
    if (m.find("partitionsDoing") != m.end() && !m["partitionsDoing"].empty()) {
      partitionsDoing = make_shared<long>(boost::any_cast<long>(m["partitionsDoing"]));
    }
    if (m.find("partitionsDone") != m.end() && !m["partitionsDone"].empty()) {
      partitionsDone = make_shared<long>(boost::any_cast<long>(m["partitionsDone"]));
    }
    if (m.find("partitionsFailed") != m.end() && !m["partitionsFailed"].empty()) {
      partitionsFailed = make_shared<long>(boost::any_cast<long>(m["partitionsFailed"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        ListMmsTablesResponseBodyDataObjectListSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<ListMmsTablesResponseBodyDataObjectListSchema>(model1);
      }
    }
    if (m.find("serde") != m.end() && !m["serde"].empty()) {
      serde = make_shared<string>(boost::any_cast<string>(m["serde"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<bool>(boost::any_cast<bool>(m["updated"]));
    }
  }


  virtual ~ListMmsTablesResponseBodyDataObjectList() = default;
};
class ListMmsTablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsTablesResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsTablesResponseBodyData() {}

  explicit ListMmsTablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsTablesResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsTablesResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsTablesResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsTablesResponseBodyData() = default;
};
class ListMmsTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsTablesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsTablesResponseBody() {}

  explicit ListMmsTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsTablesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsTablesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsTablesResponseBody() = default;
};
class ListMmsTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsTablesResponseBody> body{};

  ListMmsTablesResponse() {}

  explicit ListMmsTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsTablesResponse() = default;
};
class ListMmsTaskLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> msg{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};

  ListMmsTaskLogsResponseBodyData() {}

  explicit ListMmsTaskLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["taskId"]));
    }
  }


  virtual ~ListMmsTaskLogsResponseBodyData() = default;
};
class ListMmsTaskLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsTaskLogsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListMmsTaskLogsResponseBody() {}

  explicit ListMmsTaskLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListMmsTaskLogsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsTaskLogsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMmsTaskLogsResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsTaskLogsResponseBody() = default;
};
class ListMmsTaskLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsTaskLogsResponseBody> body{};

  ListMmsTaskLogsResponse() {}

  explicit ListMmsTaskLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsTaskLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsTaskLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsTaskLogsResponse() = default;
};
class ListMmsTasksRequestSorter : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  ListMmsTasksRequestSorter() {}

  explicit ListMmsTasksRequestSorter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListMmsTasksRequestSorter() = default;
};
class ListMmsTasksRequest : public Darabonba::Model {
public:
  shared_ptr<ListMmsTasksRequestSorter> sorter{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstTableName{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> partition{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcTableName{};
  shared_ptr<string> status{};

  ListMmsTasksRequest() {}

  explicit ListMmsTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sorter) {
      res["sorter"] = sorter ? boost::any(sorter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstTableName) {
      res["dstTableName"] = boost::any(*dstTableName);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["jobName"] = boost::any(*jobName);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcTableName) {
      res["srcTableName"] = boost::any(*srcTableName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sorter") != m.end() && !m["sorter"].empty()) {
      if (typeid(map<string, boost::any>) == m["sorter"].type()) {
        ListMmsTasksRequestSorter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sorter"]));
        sorter = make_shared<ListMmsTasksRequestSorter>(model1);
      }
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstTableName") != m.end() && !m["dstTableName"].empty()) {
      dstTableName = make_shared<string>(boost::any_cast<string>(m["dstTableName"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["jobId"]));
    }
    if (m.find("jobName") != m.end() && !m["jobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["jobName"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcTableName") != m.end() && !m["srcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["srcTableName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListMmsTasksRequest() = default;
};
class ListMmsTasksResponseBodyDataObjectList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dstDbName{};
  shared_ptr<string> dstSchemaName{};
  shared_ptr<string> dstTableName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> id{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<long> retriedTimes{};
  shared_ptr<bool> running{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> srcDbName{};
  shared_ptr<string> srcSchemaName{};
  shared_ptr<string> srcTableName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<bool> stopped{};
  shared_ptr<long> tableId{};
  shared_ptr<string> type{};

  ListMmsTasksResponseBodyDataObjectList() {}

  explicit ListMmsTasksResponseBodyDataObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dbId) {
      res["dbId"] = boost::any(*dbId);
    }
    if (dstDbName) {
      res["dstDbName"] = boost::any(*dstDbName);
    }
    if (dstSchemaName) {
      res["dstSchemaName"] = boost::any(*dstSchemaName);
    }
    if (dstTableName) {
      res["dstTableName"] = boost::any(*dstTableName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["jobName"] = boost::any(*jobName);
    }
    if (retriedTimes) {
      res["retriedTimes"] = boost::any(*retriedTimes);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceName) {
      res["sourceName"] = boost::any(*sourceName);
    }
    if (srcDbName) {
      res["srcDbName"] = boost::any(*srcDbName);
    }
    if (srcSchemaName) {
      res["srcSchemaName"] = boost::any(*srcSchemaName);
    }
    if (srcTableName) {
      res["srcTableName"] = boost::any(*srcTableName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stopped) {
      res["stopped"] = boost::any(*stopped);
    }
    if (tableId) {
      res["tableId"] = boost::any(*tableId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dbId") != m.end() && !m["dbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["dbId"]));
    }
    if (m.find("dstDbName") != m.end() && !m["dstDbName"].empty()) {
      dstDbName = make_shared<string>(boost::any_cast<string>(m["dstDbName"]));
    }
    if (m.find("dstSchemaName") != m.end() && !m["dstSchemaName"].empty()) {
      dstSchemaName = make_shared<string>(boost::any_cast<string>(m["dstSchemaName"]));
    }
    if (m.find("dstTableName") != m.end() && !m["dstTableName"].empty()) {
      dstTableName = make_shared<string>(boost::any_cast<string>(m["dstTableName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["jobId"]));
    }
    if (m.find("jobName") != m.end() && !m["jobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["jobName"]));
    }
    if (m.find("retriedTimes") != m.end() && !m["retriedTimes"].empty()) {
      retriedTimes = make_shared<long>(boost::any_cast<long>(m["retriedTimes"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<bool>(boost::any_cast<bool>(m["running"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceName") != m.end() && !m["sourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["sourceName"]));
    }
    if (m.find("srcDbName") != m.end() && !m["srcDbName"].empty()) {
      srcDbName = make_shared<string>(boost::any_cast<string>(m["srcDbName"]));
    }
    if (m.find("srcSchemaName") != m.end() && !m["srcSchemaName"].empty()) {
      srcSchemaName = make_shared<string>(boost::any_cast<string>(m["srcSchemaName"]));
    }
    if (m.find("srcTableName") != m.end() && !m["srcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["srcTableName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stopped") != m.end() && !m["stopped"].empty()) {
      stopped = make_shared<bool>(boost::any_cast<bool>(m["stopped"]));
    }
    if (m.find("tableId") != m.end() && !m["tableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["tableId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListMmsTasksResponseBodyDataObjectList() = default;
};
class ListMmsTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMmsTasksResponseBodyDataObjectList>> objectList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListMmsTasksResponseBodyData() {}

  explicit ListMmsTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectList) {
      vector<boost::any> temp1;
      for(auto item1:*objectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["objectList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectList") != m.end() && !m["objectList"].empty()) {
      if (typeid(vector<boost::any>) == m["objectList"].type()) {
        vector<ListMmsTasksResponseBodyDataObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["objectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMmsTasksResponseBodyDataObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectList = make_shared<vector<ListMmsTasksResponseBodyDataObjectList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMmsTasksResponseBodyData() = default;
};
class ListMmsTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMmsTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListMmsTasksResponseBody() {}

  explicit ListMmsTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListMmsTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMmsTasksResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMmsTasksResponseBody() = default;
};
class ListMmsTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMmsTasksResponseBody> body{};

  ListMmsTasksResponse() {}

  explicit ListMmsTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMmsTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMmsTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListMmsTasksResponse() = default;
};
class ListPackagesResponseBodyDataCreatedPackages : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> name{};

  ListPackagesResponseBodyDataCreatedPackages() {}

  explicit ListPackagesResponseBodyDataCreatedPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListPackagesResponseBodyDataCreatedPackages() = default;
};
class ListPackagesResponseBodyDataInstalledPackages : public Darabonba::Model {
public:
  shared_ptr<long> installTime{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceProject{};
  shared_ptr<string> status{};

  ListPackagesResponseBodyDataInstalledPackages() {}

  explicit ListPackagesResponseBodyDataInstalledPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (installTime) {
      res["installTime"] = boost::any(*installTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceProject) {
      res["sourceProject"] = boost::any(*sourceProject);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("installTime") != m.end() && !m["installTime"].empty()) {
      installTime = make_shared<long>(boost::any_cast<long>(m["installTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceProject") != m.end() && !m["sourceProject"].empty()) {
      sourceProject = make_shared<string>(boost::any_cast<string>(m["sourceProject"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListPackagesResponseBodyDataInstalledPackages() = default;
};
class ListPackagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPackagesResponseBodyDataCreatedPackages>> createdPackages{};
  shared_ptr<vector<ListPackagesResponseBodyDataInstalledPackages>> installedPackages{};

  ListPackagesResponseBodyData() {}

  explicit ListPackagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdPackages) {
      vector<boost::any> temp1;
      for(auto item1:*createdPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["createdPackages"] = boost::any(temp1);
    }
    if (installedPackages) {
      vector<boost::any> temp1;
      for(auto item1:*installedPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["installedPackages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdPackages") != m.end() && !m["createdPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["createdPackages"].type()) {
        vector<ListPackagesResponseBodyDataCreatedPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["createdPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackagesResponseBodyDataCreatedPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createdPackages = make_shared<vector<ListPackagesResponseBodyDataCreatedPackages>>(expect1);
      }
    }
    if (m.find("installedPackages") != m.end() && !m["installedPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["installedPackages"].type()) {
        vector<ListPackagesResponseBodyDataInstalledPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["installedPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackagesResponseBodyDataInstalledPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        installedPackages = make_shared<vector<ListPackagesResponseBodyDataInstalledPackages>>(expect1);
      }
    }
  }


  virtual ~ListPackagesResponseBodyData() = default;
};
class ListPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPackagesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListPackagesResponseBody() {}

  explicit ListPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListPackagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListPackagesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListPackagesResponseBody() = default;
};
class ListPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPackagesResponseBody> body{};

  ListPackagesResponse() {}

  explicit ListPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPackagesResponse() = default;
};
class ListProjectUsersResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListProjectUsersResponseBodyDataUsers() {}

  explicit ListProjectUsersResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListProjectUsersResponseBodyDataUsers() = default;
};
class ListProjectUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectUsersResponseBodyDataUsers>> users{};

  ListProjectUsersResponseBodyData() {}

  explicit ListProjectUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListProjectUsersResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectUsersResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListProjectUsersResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListProjectUsersResponseBodyData() = default;
};
class ListProjectUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProjectUsersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListProjectUsersResponseBody() {}

  explicit ListProjectUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProjectUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProjectUsersResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProjectUsersResponseBody() = default;
};
class ListProjectUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectUsersResponseBody> body{};

  ListProjectUsersResponse() {}

  explicit ListProjectUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectUsersResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> listSystemCatalog{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaNickName{};
  shared_ptr<string> region{};
  shared_ptr<string> saleTags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listSystemCatalog) {
      res["listSystemCatalog"] = boost::any(*listSystemCatalog);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (quotaName) {
      res["quotaName"] = boost::any(*quotaName);
    }
    if (quotaNickName) {
      res["quotaNickName"] = boost::any(*quotaNickName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (saleTags) {
      res["saleTags"] = boost::any(*saleTags);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("listSystemCatalog") != m.end() && !m["listSystemCatalog"].empty()) {
      listSystemCatalog = make_shared<bool>(boost::any_cast<bool>(m["listSystemCatalog"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("quotaName") != m.end() && !m["quotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["quotaName"]));
    }
    if (m.find("quotaNickName") != m.end() && !m["quotaNickName"].empty()) {
      quotaNickName = make_shared<string>(boost::any_cast<string>(m["quotaNickName"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("saleTags") != m.end() && !m["saleTags"].empty()) {
      saleTags = make_shared<string>(boost::any_cast<string>(m["saleTags"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyDataProjectsIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<string> ipList{};
  shared_ptr<string> vpcIpList{};

  ListProjectsResponseBodyDataProjectsIpWhiteList() {}

  explicit ListProjectsResponseBodyDataProjectsIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      res["ipList"] = boost::any(*ipList);
    }
    if (vpcIpList) {
      res["vpcIpList"] = boost::any(*vpcIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipList") != m.end() && !m["ipList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["ipList"]));
    }
    if (m.find("vpcIpList") != m.end() && !m["vpcIpList"].empty()) {
      vpcIpList = make_shared<string>(boost::any_cast<string>(m["vpcIpList"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsIpWhiteList() = default;
};
class ListProjectsResponseBodyDataProjectsPropertiesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enable{};
  shared_ptr<string> key{};

  ListProjectsResponseBodyDataProjectsPropertiesEncryption() {}

  explicit ListProjectsResponseBodyDataProjectsPropertiesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsPropertiesEncryption() = default;
};
class ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties : public Darabonba::Model {
public:
  shared_ptr<string> isExternalCatalogBound{};

  ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties() {}

  explicit ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isExternalCatalogBound) {
      res["isExternalCatalogBound"] = boost::any(*isExternalCatalogBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isExternalCatalogBound") != m.end() && !m["isExternalCatalogBound"].empty()) {
      isExternalCatalogBound = make_shared<string>(boost::any_cast<string>(m["isExternalCatalogBound"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties() = default;
};
class ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle() {}

  explicit ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle() = default;
};
class ListProjectsResponseBodyDataProjectsProperties : public Darabonba::Model {
public:
  shared_ptr<bool> allowFullScan{};
  shared_ptr<bool> enableDecimal2{};
  shared_ptr<bool> enableTunnelQuotaRoute{};
  shared_ptr<ListProjectsResponseBodyDataProjectsPropertiesEncryption> encryption{};
  shared_ptr<ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties> externalProjectProperties{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> sqlMeteringMax{};
  shared_ptr<ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle> tableLifecycle{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tunnelQuota{};
  shared_ptr<string> typeSystem{};

  ListProjectsResponseBodyDataProjectsProperties() {}

  explicit ListProjectsResponseBodyDataProjectsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowFullScan) {
      res["allowFullScan"] = boost::any(*allowFullScan);
    }
    if (enableDecimal2) {
      res["enableDecimal2"] = boost::any(*enableDecimal2);
    }
    if (enableTunnelQuotaRoute) {
      res["enableTunnelQuotaRoute"] = boost::any(*enableTunnelQuotaRoute);
    }
    if (encryption) {
      res["encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (externalProjectProperties) {
      res["externalProjectProperties"] = externalProjectProperties ? boost::any(externalProjectProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retentionDays) {
      res["retentionDays"] = boost::any(*retentionDays);
    }
    if (sqlMeteringMax) {
      res["sqlMeteringMax"] = boost::any(*sqlMeteringMax);
    }
    if (tableLifecycle) {
      res["tableLifecycle"] = tableLifecycle ? boost::any(tableLifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuota) {
      res["tunnelQuota"] = boost::any(*tunnelQuota);
    }
    if (typeSystem) {
      res["typeSystem"] = boost::any(*typeSystem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowFullScan") != m.end() && !m["allowFullScan"].empty()) {
      allowFullScan = make_shared<bool>(boost::any_cast<bool>(m["allowFullScan"]));
    }
    if (m.find("enableDecimal2") != m.end() && !m["enableDecimal2"].empty()) {
      enableDecimal2 = make_shared<bool>(boost::any_cast<bool>(m["enableDecimal2"]));
    }
    if (m.find("enableTunnelQuotaRoute") != m.end() && !m["enableTunnelQuotaRoute"].empty()) {
      enableTunnelQuotaRoute = make_shared<bool>(boost::any_cast<bool>(m["enableTunnelQuotaRoute"]));
    }
    if (m.find("encryption") != m.end() && !m["encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["encryption"].type()) {
        ListProjectsResponseBodyDataProjectsPropertiesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encryption"]));
        encryption = make_shared<ListProjectsResponseBodyDataProjectsPropertiesEncryption>(model1);
      }
    }
    if (m.find("externalProjectProperties") != m.end() && !m["externalProjectProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["externalProjectProperties"].type()) {
        ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["externalProjectProperties"]));
        externalProjectProperties = make_shared<ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties>(model1);
      }
    }
    if (m.find("retentionDays") != m.end() && !m["retentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["retentionDays"]));
    }
    if (m.find("sqlMeteringMax") != m.end() && !m["sqlMeteringMax"].empty()) {
      sqlMeteringMax = make_shared<string>(boost::any_cast<string>(m["sqlMeteringMax"]));
    }
    if (m.find("tableLifecycle") != m.end() && !m["tableLifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycle"].type()) {
        ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycle"]));
        tableLifecycle = make_shared<ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle>(model1);
      }
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuota") != m.end() && !m["tunnelQuota"].empty()) {
      tunnelQuota = make_shared<string>(boost::any_cast<string>(m["tunnelQuota"]));
    }
    if (m.find("typeSystem") != m.end() && !m["typeSystem"].empty()) {
      typeSystem = make_shared<string>(boost::any_cast<string>(m["typeSystem"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsProperties() = default;
};
class ListProjectsResponseBodyDataProjectsSaleTag : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListProjectsResponseBodyDataProjectsSaleTag() {}

  explicit ListProjectsResponseBodyDataProjectsSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSaleTag() = default;
};
class ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection : public Darabonba::Model {
public:
  shared_ptr<string> exceptionPolicy{};
  shared_ptr<bool> protected_{};

  ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() {}

  explicit ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionPolicy) {
      res["exceptionPolicy"] = boost::any(*exceptionPolicy);
    }
    if (protected_) {
      res["protected"] = boost::any(*protected_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exceptionPolicy") != m.end() && !m["exceptionPolicy"].empty()) {
      exceptionPolicy = make_shared<string>(boost::any_cast<string>(m["exceptionPolicy"]));
    }
    if (m.find("protected") != m.end() && !m["protected"].empty()) {
      protected_ = make_shared<bool>(boost::any_cast<bool>(m["protected"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() = default;
};
class ListProjectsResponseBodyDataProjectsSecurityProperties : public Darabonba::Model {
public:
  shared_ptr<bool> enableDownloadPrivilege{};
  shared_ptr<bool> labelSecurity{};
  shared_ptr<bool> objectCreatorHasAccessPermission{};
  shared_ptr<bool> objectCreatorHasGrantPermission{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection> projectProtection{};
  shared_ptr<bool> usingAcl{};
  shared_ptr<bool> usingPolicy{};

  ListProjectsResponseBodyDataProjectsSecurityProperties() {}

  explicit ListProjectsResponseBodyDataProjectsSecurityProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDownloadPrivilege) {
      res["enableDownloadPrivilege"] = boost::any(*enableDownloadPrivilege);
    }
    if (labelSecurity) {
      res["labelSecurity"] = boost::any(*labelSecurity);
    }
    if (objectCreatorHasAccessPermission) {
      res["objectCreatorHasAccessPermission"] = boost::any(*objectCreatorHasAccessPermission);
    }
    if (objectCreatorHasGrantPermission) {
      res["objectCreatorHasGrantPermission"] = boost::any(*objectCreatorHasGrantPermission);
    }
    if (projectProtection) {
      res["projectProtection"] = projectProtection ? boost::any(projectProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usingAcl) {
      res["usingAcl"] = boost::any(*usingAcl);
    }
    if (usingPolicy) {
      res["usingPolicy"] = boost::any(*usingPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDownloadPrivilege") != m.end() && !m["enableDownloadPrivilege"].empty()) {
      enableDownloadPrivilege = make_shared<bool>(boost::any_cast<bool>(m["enableDownloadPrivilege"]));
    }
    if (m.find("labelSecurity") != m.end() && !m["labelSecurity"].empty()) {
      labelSecurity = make_shared<bool>(boost::any_cast<bool>(m["labelSecurity"]));
    }
    if (m.find("objectCreatorHasAccessPermission") != m.end() && !m["objectCreatorHasAccessPermission"].empty()) {
      objectCreatorHasAccessPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasAccessPermission"]));
    }
    if (m.find("objectCreatorHasGrantPermission") != m.end() && !m["objectCreatorHasGrantPermission"].empty()) {
      objectCreatorHasGrantPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasGrantPermission"]));
    }
    if (m.find("projectProtection") != m.end() && !m["projectProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectProtection"].type()) {
        ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectProtection"]));
        projectProtection = make_shared<ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection>(model1);
      }
    }
    if (m.find("usingAcl") != m.end() && !m["usingAcl"].empty()) {
      usingAcl = make_shared<bool>(boost::any_cast<bool>(m["usingAcl"]));
    }
    if (m.find("usingPolicy") != m.end() && !m["usingPolicy"].empty()) {
      usingPolicy = make_shared<bool>(boost::any_cast<bool>(m["usingPolicy"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSecurityProperties() = default;
};
class ListProjectsResponseBodyDataProjects : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> costStorage{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> defaultQuota{};
  shared_ptr<ListProjectsResponseBodyDataProjectsIpWhiteList> ipWhiteList{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<ListProjectsResponseBodyDataProjectsProperties> properties{};
  shared_ptr<string> regionId{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSaleTag> saleTag{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSecurityProperties> securityProperties{};
  shared_ptr<string> status{};
  shared_ptr<bool> threeTierModel{};
  shared_ptr<string> type{};

  ListProjectsResponseBodyDataProjects() {}

  explicit ListProjectsResponseBodyDataProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (costStorage) {
      res["costStorage"] = boost::any(*costStorage);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (defaultQuota) {
      res["defaultQuota"] = boost::any(*defaultQuota);
    }
    if (ipWhiteList) {
      res["ipWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (properties) {
      res["properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityProperties) {
      res["securityProperties"] = securityProperties ? boost::any(securityProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (threeTierModel) {
      res["threeTierModel"] = boost::any(*threeTierModel);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("costStorage") != m.end() && !m["costStorage"].empty()) {
      costStorage = make_shared<string>(boost::any_cast<string>(m["costStorage"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["createdTime"]));
    }
    if (m.find("defaultQuota") != m.end() && !m["defaultQuota"].empty()) {
      defaultQuota = make_shared<string>(boost::any_cast<string>(m["defaultQuota"]));
    }
    if (m.find("ipWhiteList") != m.end() && !m["ipWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ipWhiteList"].type()) {
        ListProjectsResponseBodyDataProjectsIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ipWhiteList"]));
        ipWhiteList = make_shared<ListProjectsResponseBodyDataProjectsIpWhiteList>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["properties"].type()) {
        ListProjectsResponseBodyDataProjectsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["properties"]));
        properties = make_shared<ListProjectsResponseBodyDataProjectsProperties>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListProjectsResponseBodyDataProjectsSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListProjectsResponseBodyDataProjectsSaleTag>(model1);
      }
    }
    if (m.find("securityProperties") != m.end() && !m["securityProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityProperties"].type()) {
        ListProjectsResponseBodyDataProjectsSecurityProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityProperties"]));
        securityProperties = make_shared<ListProjectsResponseBodyDataProjectsSecurityProperties>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("threeTierModel") != m.end() && !m["threeTierModel"].empty()) {
      threeTierModel = make_shared<bool>(boost::any_cast<bool>(m["threeTierModel"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjects() = default;
};
class ListProjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListProjectsResponseBodyDataProjects>> projects{};

  ListProjectsResponseBodyData() {}

  explicit ListProjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<ListProjectsResponseBodyDataProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyDataProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyDataProjects>>(expect1);
      }
    }
  }


  virtual ~ListProjectsResponseBodyData() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProjectsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProjectsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProjectsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> saleTags{};
  shared_ptr<string> tenantId{};

  ListQuotasRequest() {}

  explicit ListQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["billingType"] = boost::any(*billingType);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (saleTags) {
      res["saleTags"] = boost::any(*saleTags);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingType") != m.end() && !m["billingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["billingType"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("saleTags") != m.end() && !m["saleTags"].empty()) {
      saleTags = make_shared<string>(boost::any_cast<string>(m["saleTags"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListQuotasRequest() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListQuotasResponseBodyDataQuotaInfoListTags() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListTags() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyDataQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyDataQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyDataQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() = default;
};
class ListQuotasResponseBodyDataQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoListTags>> tags{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyDataQuotaInfoList() {}

  explicit ListQuotasResponseBodyDataQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoListTags>>(expect1);
      }
    }
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyDataQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyDataQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyDataQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoList() = default;
};
class ListQuotasResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoList>> quotaInfoList{};

  ListQuotasResponseBodyData() {}

  explicit ListQuotasResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (quotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*quotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["quotaInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("quotaInfoList") != m.end() && !m["quotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["quotaInfoList"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["quotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaInfoList = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoList>>(expect1);
      }
    }
  }


  virtual ~ListQuotasResponseBodyData() = default;
};
class ListQuotasResponseBodyQuotaInfoListTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListQuotasResponseBodyQuotaInfoListTags() {}

  explicit ListQuotasResponseBodyQuotaInfoListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListTags() = default;
};
class ListQuotasResponseBodyQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList() = default;
};
class ListQuotasResponseBodyQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoListTags>> tags{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyQuotaInfoList() {}

  explicit ListQuotasResponseBodyQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListQuotasResponseBodyQuotaInfoListTags>>(expect1);
      }
    }
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoList() = default;
};
class ListQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<ListQuotasResponseBodyData> data{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoList>> quotaInfoList{};
  shared_ptr<string> requestId{};

  ListQuotasResponseBody() {}

  explicit ListQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (quotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*quotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["quotaInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListQuotasResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListQuotasResponseBodyData>(model1);
      }
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("quotaInfoList") != m.end() && !m["quotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["quotaInfoList"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["quotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaInfoList = make_shared<vector<ListQuotasResponseBodyQuotaInfoList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListQuotasResponseBody() = default;
};
class ListQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasResponseBody> body{};

  ListQuotasResponse() {}

  explicit ListQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasResponse() = default;
};
class ListQuotasPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  ListQuotasPlansRequest() {}

  explicit ListQuotasPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListQuotasPlansRequest() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuota : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasPlansResponseBodyDataPlanListQuota() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuota() = default;
};
class ListQuotasPlansResponseBodyDataPlanList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuota> quota{};

  ListQuotasPlansResponseBodyDataPlanList() {}

  explicit ListQuotasPlansResponseBodyDataPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ListQuotasPlansResponseBodyDataPlanListQuota>(model1);
      }
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanList() = default;
};
class ListQuotasPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasPlansResponseBodyDataPlanList>> planList{};

  ListQuotasPlansResponseBodyData() {}

  explicit ListQuotasPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planList) {
      vector<boost::any> temp1;
      for(auto item1:*planList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["planList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("planList") != m.end() && !m["planList"].empty()) {
      if (typeid(vector<boost::any>) == m["planList"].type()) {
        vector<ListQuotasPlansResponseBodyDataPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["planList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasPlansResponseBodyDataPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planList = make_shared<vector<ListQuotasPlansResponseBodyDataPlanList>>(expect1);
      }
    }
  }


  virtual ~ListQuotasPlansResponseBodyData() = default;
};
class ListQuotasPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListQuotasPlansResponseBody() {}

  explicit ListQuotasPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListQuotasPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListQuotasPlansResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBody() = default;
};
class ListQuotasPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasPlansResponseBody> body{};

  ListQuotasPlansResponse() {}

  explicit ListQuotasPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotasPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasPlansResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyDataResources : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> contentMD5{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> lastUpdator{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> schema{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyDataResources() {}

  explicit ListResourcesResponseBodyDataResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (contentMD5) {
      res["contentMD5"] = boost::any(*contentMD5);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lastUpdator) {
      res["lastUpdator"] = boost::any(*lastUpdator);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("contentMD5") != m.end() && !m["contentMD5"].empty()) {
      contentMD5 = make_shared<string>(boost::any_cast<string>(m["contentMD5"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("lastUpdator") != m.end() && !m["lastUpdator"].empty()) {
      lastUpdator = make_shared<string>(boost::any_cast<string>(m["lastUpdator"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListResourcesResponseBodyDataResources() = default;
};
class ListResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListResourcesResponseBodyDataResources>> resources{};

  ListResourcesResponseBodyData() {}

  explicit ListResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<ListResourcesResponseBodyDataResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyDataResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyDataResources>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyData() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRolesResponseBodyDataRolesAclFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclFunction() {}

  explicit ListRolesResponseBodyDataRolesAclFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclFunction() = default;
};
class ListRolesResponseBodyDataRolesAclInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclInstance() {}

  explicit ListRolesResponseBodyDataRolesAclInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclInstance() = default;
};
class ListRolesResponseBodyDataRolesAclPackage : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclPackage() {}

  explicit ListRolesResponseBodyDataRolesAclPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclPackage() = default;
};
class ListRolesResponseBodyDataRolesAclProject : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclProject() {}

  explicit ListRolesResponseBodyDataRolesAclProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclProject() = default;
};
class ListRolesResponseBodyDataRolesAclResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclResource() {}

  explicit ListRolesResponseBodyDataRolesAclResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclResource() = default;
};
class ListRolesResponseBodyDataRolesAclTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclTable() {}

  explicit ListRolesResponseBodyDataRolesAclTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclTable() = default;
};
class ListRolesResponseBodyDataRolesAcl : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclFunction>> function{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclInstance>> instance{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclPackage>> package{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclProject>> project{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclResource>> resource{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclTable>> table{};

  ListRolesResponseBodyDataRolesAcl() {}

  explicit ListRolesResponseBodyDataRolesAcl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instance"] = boost::any(temp1);
    }
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["package"] = boost::any(temp1);
    }
    if (project) {
      vector<boost::any> temp1;
      for(auto item1:*project){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["project"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<ListRolesResponseBodyDataRolesAclFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<ListRolesResponseBodyDataRolesAclFunction>>(expect1);
      }
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<ListRolesResponseBodyDataRolesAclInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListRolesResponseBodyDataRolesAclInstance>>(expect1);
      }
    }
    if (m.find("package") != m.end() && !m["package"].empty()) {
      if (typeid(vector<boost::any>) == m["package"].type()) {
        vector<ListRolesResponseBodyDataRolesAclPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<ListRolesResponseBodyDataRolesAclPackage>>(expect1);
      }
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(vector<boost::any>) == m["project"].type()) {
        vector<ListRolesResponseBodyDataRolesAclProject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["project"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclProject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        project = make_shared<vector<ListRolesResponseBodyDataRolesAclProject>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<ListRolesResponseBodyDataRolesAclResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<ListRolesResponseBodyDataRolesAclResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<ListRolesResponseBodyDataRolesAclTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<ListRolesResponseBodyDataRolesAclTable>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAcl() = default;
};
class ListRolesResponseBodyDataRoles : public Darabonba::Model {
public:
  shared_ptr<ListRolesResponseBodyDataRolesAcl> acl{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> type{};

  ListRolesResponseBodyDataRoles() {}

  explicit ListRolesResponseBodyDataRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = acl ? boost::any(acl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      if (typeid(map<string, boost::any>) == m["acl"].type()) {
        ListRolesResponseBodyDataRolesAcl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["acl"]));
        acl = make_shared<ListRolesResponseBodyDataRolesAcl>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRoles() = default;
};
class ListRolesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyDataRoles>> roles{};

  ListRolesResponseBodyData() {}

  explicit ListRolesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["roles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roles") != m.end() && !m["roles"].empty()) {
      if (typeid(vector<boost::any>) == m["roles"].type()) {
        vector<ListRolesResponseBodyDataRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<ListRolesResponseBodyDataRoles>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyData() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListRolesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListRolesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListRolesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListStoragePartitionsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ascOrder{};
  shared_ptr<string> date{};
  shared_ptr<string> orderColumn{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> partitionPrefix{};
  shared_ptr<string> region{};
  shared_ptr<string> schema{};
  shared_ptr<string> tenantId{};
  shared_ptr<vector<string>> types{};

  ListStoragePartitionsInfoRequest() {}

  explicit ListStoragePartitionsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ascOrder) {
      res["ascOrder"] = boost::any(*ascOrder);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (orderColumn) {
      res["orderColumn"] = boost::any(*orderColumn);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (partitionPrefix) {
      res["partitionPrefix"] = boost::any(*partitionPrefix);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ascOrder") != m.end() && !m["ascOrder"].empty()) {
      ascOrder = make_shared<bool>(boost::any_cast<bool>(m["ascOrder"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("orderColumn") != m.end() && !m["orderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["orderColumn"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("partitionPrefix") != m.end() && !m["partitionPrefix"].empty()) {
      partitionPrefix = make_shared<string>(boost::any_cast<string>(m["partitionPrefix"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListStoragePartitionsInfoRequest() = default;
};
class ListStoragePartitionsInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ascOrder{};
  shared_ptr<string> date{};
  shared_ptr<string> orderColumn{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> partitionPrefix{};
  shared_ptr<string> region{};
  shared_ptr<string> schema{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> typesShrink{};

  ListStoragePartitionsInfoShrinkRequest() {}

  explicit ListStoragePartitionsInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ascOrder) {
      res["ascOrder"] = boost::any(*ascOrder);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (orderColumn) {
      res["orderColumn"] = boost::any(*orderColumn);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (partitionPrefix) {
      res["partitionPrefix"] = boost::any(*partitionPrefix);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (typesShrink) {
      res["types"] = boost::any(*typesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ascOrder") != m.end() && !m["ascOrder"].empty()) {
      ascOrder = make_shared<bool>(boost::any_cast<bool>(m["ascOrder"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("orderColumn") != m.end() && !m["orderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["orderColumn"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("partitionPrefix") != m.end() && !m["partitionPrefix"].empty()) {
      partitionPrefix = make_shared<string>(boost::any_cast<string>(m["partitionPrefix"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      typesShrink = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~ListStoragePartitionsInfoShrinkRequest() = default;
};
class ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList : public Darabonba::Model {
public:
  shared_ptr<long> fileCount{};
  shared_ptr<double> fileSize{};
  shared_ptr<string> fileSizeUnit{};
  shared_ptr<bool> isPartitioned{};
  shared_ptr<long> lastAccessTime{};
  shared_ptr<string> partition{};
  shared_ptr<string> projectName{};
  shared_ptr<double> rate{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> storageType{};
  shared_ptr<string> tableName{};
  shared_ptr<long> totalFrequency{};
  shared_ptr<double> totalInputAmount{};
  shared_ptr<string> totalInputAmountUnit{};
  shared_ptr<string> type{};

  ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList() {}

  explicit ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCount) {
      res["fileCount"] = boost::any(*fileCount);
    }
    if (fileSize) {
      res["fileSize"] = boost::any(*fileSize);
    }
    if (fileSizeUnit) {
      res["fileSizeUnit"] = boost::any(*fileSizeUnit);
    }
    if (isPartitioned) {
      res["isPartitioned"] = boost::any(*isPartitioned);
    }
    if (lastAccessTime) {
      res["lastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (rate) {
      res["rate"] = boost::any(*rate);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (storageType) {
      res["storageType"] = boost::any(*storageType);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (totalFrequency) {
      res["totalFrequency"] = boost::any(*totalFrequency);
    }
    if (totalInputAmount) {
      res["totalInputAmount"] = boost::any(*totalInputAmount);
    }
    if (totalInputAmountUnit) {
      res["totalInputAmountUnit"] = boost::any(*totalInputAmountUnit);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileCount") != m.end() && !m["fileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["fileCount"]));
    }
    if (m.find("fileSize") != m.end() && !m["fileSize"].empty()) {
      fileSize = make_shared<double>(boost::any_cast<double>(m["fileSize"]));
    }
    if (m.find("fileSizeUnit") != m.end() && !m["fileSizeUnit"].empty()) {
      fileSizeUnit = make_shared<string>(boost::any_cast<string>(m["fileSizeUnit"]));
    }
    if (m.find("isPartitioned") != m.end() && !m["isPartitioned"].empty()) {
      isPartitioned = make_shared<bool>(boost::any_cast<bool>(m["isPartitioned"]));
    }
    if (m.find("lastAccessTime") != m.end() && !m["lastAccessTime"].empty()) {
      lastAccessTime = make_shared<long>(boost::any_cast<long>(m["lastAccessTime"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("rate") != m.end() && !m["rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["rate"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("storageType") != m.end() && !m["storageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["storageType"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("totalFrequency") != m.end() && !m["totalFrequency"].empty()) {
      totalFrequency = make_shared<long>(boost::any_cast<long>(m["totalFrequency"]));
    }
    if (m.find("totalInputAmount") != m.end() && !m["totalInputAmount"].empty()) {
      totalInputAmount = make_shared<double>(boost::any_cast<double>(m["totalInputAmount"]));
    }
    if (m.find("totalInputAmountUnit") != m.end() && !m["totalInputAmountUnit"].empty()) {
      totalInputAmountUnit = make_shared<string>(boost::any_cast<string>(m["totalInputAmountUnit"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList() = default;
};
class ListStoragePartitionsInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList>> storagePartitionInfoList{};
  shared_ptr<long> totalCount{};

  ListStoragePartitionsInfoResponseBodyData() {}

  explicit ListStoragePartitionsInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (storagePartitionInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*storagePartitionInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["storagePartitionInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("storagePartitionInfoList") != m.end() && !m["storagePartitionInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["storagePartitionInfoList"].type()) {
        vector<ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["storagePartitionInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storagePartitionInfoList = make_shared<vector<ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListStoragePartitionsInfoResponseBodyData() = default;
};
class ListStoragePartitionsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListStoragePartitionsInfoResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ListStoragePartitionsInfoResponseBody() {}

  explicit ListStoragePartitionsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListStoragePartitionsInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListStoragePartitionsInfoResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListStoragePartitionsInfoResponseBody() = default;
};
class ListStoragePartitionsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStoragePartitionsInfoResponseBody> body{};

  ListStoragePartitionsInfoResponse() {}

  explicit ListStoragePartitionsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStoragePartitionsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStoragePartitionsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListStoragePartitionsInfoResponse() = default;
};
class ListStorageTablesInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ascOrder{};
  shared_ptr<string> date{};
  shared_ptr<string> orderColumn{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> recentDays{};
  shared_ptr<string> region{};
  shared_ptr<string> schema{};
  shared_ptr<string> tablePrefix{};
  shared_ptr<string> tenantId{};
  shared_ptr<vector<string>> types{};

  ListStorageTablesInfoRequest() {}

  explicit ListStorageTablesInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ascOrder) {
      res["ascOrder"] = boost::any(*ascOrder);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (orderColumn) {
      res["orderColumn"] = boost::any(*orderColumn);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (recentDays) {
      res["recentDays"] = boost::any(*recentDays);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (tablePrefix) {
      res["tablePrefix"] = boost::any(*tablePrefix);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ascOrder") != m.end() && !m["ascOrder"].empty()) {
      ascOrder = make_shared<bool>(boost::any_cast<bool>(m["ascOrder"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("orderColumn") != m.end() && !m["orderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["orderColumn"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("recentDays") != m.end() && !m["recentDays"].empty()) {
      recentDays = make_shared<long>(boost::any_cast<long>(m["recentDays"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("tablePrefix") != m.end() && !m["tablePrefix"].empty()) {
      tablePrefix = make_shared<string>(boost::any_cast<string>(m["tablePrefix"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListStorageTablesInfoRequest() = default;
};
class ListStorageTablesInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ascOrder{};
  shared_ptr<string> date{};
  shared_ptr<string> orderColumn{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> recentDays{};
  shared_ptr<string> region{};
  shared_ptr<string> schema{};
  shared_ptr<string> tablePrefix{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> typesShrink{};

  ListStorageTablesInfoShrinkRequest() {}

  explicit ListStorageTablesInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ascOrder) {
      res["ascOrder"] = boost::any(*ascOrder);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (orderColumn) {
      res["orderColumn"] = boost::any(*orderColumn);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (recentDays) {
      res["recentDays"] = boost::any(*recentDays);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (tablePrefix) {
      res["tablePrefix"] = boost::any(*tablePrefix);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (typesShrink) {
      res["types"] = boost::any(*typesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ascOrder") != m.end() && !m["ascOrder"].empty()) {
      ascOrder = make_shared<bool>(boost::any_cast<bool>(m["ascOrder"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("orderColumn") != m.end() && !m["orderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["orderColumn"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("recentDays") != m.end() && !m["recentDays"].empty()) {
      recentDays = make_shared<long>(boost::any_cast<long>(m["recentDays"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("tablePrefix") != m.end() && !m["tablePrefix"].empty()) {
      tablePrefix = make_shared<string>(boost::any_cast<string>(m["tablePrefix"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      typesShrink = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~ListStorageTablesInfoShrinkRequest() = default;
};
class ListStorageTablesInfoResponseBodyDataStorageTableInfoList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<bool> isPartitioned{};
  shared_ptr<long> lastAccessTime{};
  shared_ptr<double> longTermStorage{};
  shared_ptr<long> longTermStorageFileCount{};
  shared_ptr<string> longTermStorageUnit{};
  shared_ptr<double> lowFreqStorage{};
  shared_ptr<long> lowFreqStorageFileCount{};
  shared_ptr<string> lowFreqStorageUnit{};
  shared_ptr<string> projectName{};
  shared_ptr<double> rate{};
  shared_ptr<string> schemaName{};
  shared_ptr<double> standardStorage{};
  shared_ptr<long> standardStorageFileCount{};
  shared_ptr<string> standardStorageUnit{};
  shared_ptr<string> storageType{};
  shared_ptr<string> tableName{};
  shared_ptr<long> totalFrequency{};
  shared_ptr<double> totalInputAmount{};
  shared_ptr<string> totalInputAmountUnit{};
  shared_ptr<double> totalStorage{};
  shared_ptr<long> totalStorageFileCount{};
  shared_ptr<string> totalStorageUnit{};

  ListStorageTablesInfoResponseBodyDataStorageTableInfoList() {}

  explicit ListStorageTablesInfoResponseBodyDataStorageTableInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (isPartitioned) {
      res["isPartitioned"] = boost::any(*isPartitioned);
    }
    if (lastAccessTime) {
      res["lastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (longTermStorage) {
      res["longTermStorage"] = boost::any(*longTermStorage);
    }
    if (longTermStorageFileCount) {
      res["longTermStorageFileCount"] = boost::any(*longTermStorageFileCount);
    }
    if (longTermStorageUnit) {
      res["longTermStorageUnit"] = boost::any(*longTermStorageUnit);
    }
    if (lowFreqStorage) {
      res["lowFreqStorage"] = boost::any(*lowFreqStorage);
    }
    if (lowFreqStorageFileCount) {
      res["lowFreqStorageFileCount"] = boost::any(*lowFreqStorageFileCount);
    }
    if (lowFreqStorageUnit) {
      res["lowFreqStorageUnit"] = boost::any(*lowFreqStorageUnit);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (rate) {
      res["rate"] = boost::any(*rate);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (standardStorage) {
      res["standardStorage"] = boost::any(*standardStorage);
    }
    if (standardStorageFileCount) {
      res["standardStorageFileCount"] = boost::any(*standardStorageFileCount);
    }
    if (standardStorageUnit) {
      res["standardStorageUnit"] = boost::any(*standardStorageUnit);
    }
    if (storageType) {
      res["storageType"] = boost::any(*storageType);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (totalFrequency) {
      res["totalFrequency"] = boost::any(*totalFrequency);
    }
    if (totalInputAmount) {
      res["totalInputAmount"] = boost::any(*totalInputAmount);
    }
    if (totalInputAmountUnit) {
      res["totalInputAmountUnit"] = boost::any(*totalInputAmountUnit);
    }
    if (totalStorage) {
      res["totalStorage"] = boost::any(*totalStorage);
    }
    if (totalStorageFileCount) {
      res["totalStorageFileCount"] = boost::any(*totalStorageFileCount);
    }
    if (totalStorageUnit) {
      res["totalStorageUnit"] = boost::any(*totalStorageUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("isPartitioned") != m.end() && !m["isPartitioned"].empty()) {
      isPartitioned = make_shared<bool>(boost::any_cast<bool>(m["isPartitioned"]));
    }
    if (m.find("lastAccessTime") != m.end() && !m["lastAccessTime"].empty()) {
      lastAccessTime = make_shared<long>(boost::any_cast<long>(m["lastAccessTime"]));
    }
    if (m.find("longTermStorage") != m.end() && !m["longTermStorage"].empty()) {
      longTermStorage = make_shared<double>(boost::any_cast<double>(m["longTermStorage"]));
    }
    if (m.find("longTermStorageFileCount") != m.end() && !m["longTermStorageFileCount"].empty()) {
      longTermStorageFileCount = make_shared<long>(boost::any_cast<long>(m["longTermStorageFileCount"]));
    }
    if (m.find("longTermStorageUnit") != m.end() && !m["longTermStorageUnit"].empty()) {
      longTermStorageUnit = make_shared<string>(boost::any_cast<string>(m["longTermStorageUnit"]));
    }
    if (m.find("lowFreqStorage") != m.end() && !m["lowFreqStorage"].empty()) {
      lowFreqStorage = make_shared<double>(boost::any_cast<double>(m["lowFreqStorage"]));
    }
    if (m.find("lowFreqStorageFileCount") != m.end() && !m["lowFreqStorageFileCount"].empty()) {
      lowFreqStorageFileCount = make_shared<long>(boost::any_cast<long>(m["lowFreqStorageFileCount"]));
    }
    if (m.find("lowFreqStorageUnit") != m.end() && !m["lowFreqStorageUnit"].empty()) {
      lowFreqStorageUnit = make_shared<string>(boost::any_cast<string>(m["lowFreqStorageUnit"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("rate") != m.end() && !m["rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["rate"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("standardStorage") != m.end() && !m["standardStorage"].empty()) {
      standardStorage = make_shared<double>(boost::any_cast<double>(m["standardStorage"]));
    }
    if (m.find("standardStorageFileCount") != m.end() && !m["standardStorageFileCount"].empty()) {
      standardStorageFileCount = make_shared<long>(boost::any_cast<long>(m["standardStorageFileCount"]));
    }
    if (m.find("standardStorageUnit") != m.end() && !m["standardStorageUnit"].empty()) {
      standardStorageUnit = make_shared<string>(boost::any_cast<string>(m["standardStorageUnit"]));
    }
    if (m.find("storageType") != m.end() && !m["storageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["storageType"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("totalFrequency") != m.end() && !m["totalFrequency"].empty()) {
      totalFrequency = make_shared<long>(boost::any_cast<long>(m["totalFrequency"]));
    }
    if (m.find("totalInputAmount") != m.end() && !m["totalInputAmount"].empty()) {
      totalInputAmount = make_shared<double>(boost::any_cast<double>(m["totalInputAmount"]));
    }
    if (m.find("totalInputAmountUnit") != m.end() && !m["totalInputAmountUnit"].empty()) {
      totalInputAmountUnit = make_shared<string>(boost::any_cast<string>(m["totalInputAmountUnit"]));
    }
    if (m.find("totalStorage") != m.end() && !m["totalStorage"].empty()) {
      totalStorage = make_shared<double>(boost::any_cast<double>(m["totalStorage"]));
    }
    if (m.find("totalStorageFileCount") != m.end() && !m["totalStorageFileCount"].empty()) {
      totalStorageFileCount = make_shared<long>(boost::any_cast<long>(m["totalStorageFileCount"]));
    }
    if (m.find("totalStorageUnit") != m.end() && !m["totalStorageUnit"].empty()) {
      totalStorageUnit = make_shared<string>(boost::any_cast<string>(m["totalStorageUnit"]));
    }
  }


  virtual ~ListStorageTablesInfoResponseBodyDataStorageTableInfoList() = default;
};
class ListStorageTablesInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListStorageTablesInfoResponseBodyDataStorageTableInfoList>> storageTableInfoList{};
  shared_ptr<long> totalCount{};

  ListStorageTablesInfoResponseBodyData() {}

  explicit ListStorageTablesInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (storageTableInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*storageTableInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["storageTableInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("storageTableInfoList") != m.end() && !m["storageTableInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["storageTableInfoList"].type()) {
        vector<ListStorageTablesInfoResponseBodyDataStorageTableInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["storageTableInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStorageTablesInfoResponseBodyDataStorageTableInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storageTableInfoList = make_shared<vector<ListStorageTablesInfoResponseBodyDataStorageTableInfoList>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListStorageTablesInfoResponseBodyData() = default;
};
class ListStorageTablesInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListStorageTablesInfoResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ListStorageTablesInfoResponseBody() {}

  explicit ListStorageTablesInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListStorageTablesInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListStorageTablesInfoResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListStorageTablesInfoResponseBody() = default;
};
class ListStorageTablesInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStorageTablesInfoResponseBody> body{};

  ListStorageTablesInfoResponse() {}

  explicit ListStorageTablesInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStorageTablesInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStorageTablesInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListStorageTablesInfoResponse() = default;
};
class ListTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> type{};

  ListTablesRequest() {}

  explicit ListTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTablesRequest() = default;
};
class ListTablesResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> schema{};
  shared_ptr<string> type{};

  ListTablesResponseBodyDataTables() {}

  explicit ListTablesResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTablesResponseBodyDataTables() = default;
};
class ListTablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListTablesResponseBodyDataTables>> tables{};

  ListTablesResponseBodyData() {}

  explicit ListTablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      if (typeid(vector<boost::any>) == m["tables"].type()) {
        vector<ListTablesResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListTablesResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~ListTablesResponseBodyData() = default;
};
class ListTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTablesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListTablesResponseBody() {}

  explicit ListTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListTablesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTablesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListTablesResponseBody() = default;
};
class ListTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTablesResponseBody> body{};

  ListTablesResponse() {}

  explicit ListTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTablesResponse() = default;
};
class ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedSlotNum{};
  shared_ptr<long> slotNum{};

  ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter() {}

  explicit ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedSlotNum) {
      res["elasticReservedSlotNum"] = boost::any(*elasticReservedSlotNum);
    }
    if (slotNum) {
      res["slotNum"] = boost::any(*slotNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedSlotNum") != m.end() && !m["elasticReservedSlotNum"].empty()) {
      elasticReservedSlotNum = make_shared<long>(boost::any_cast<long>(m["elasticReservedSlotNum"]));
    }
    if (m.find("slotNum") != m.end() && !m["slotNum"].empty()) {
      slotNum = make_shared<long>(boost::any_cast<long>(m["slotNum"]));
    }
  }


  virtual ~ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter() = default;
};
class ListTunnelQuotaTimerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> timezone{};
  shared_ptr<ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter> tunnelQuotaParameter{};

  ListTunnelQuotaTimerResponseBodyData() {}

  explicit ListTunnelQuotaTimerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuotaParameter) {
      res["tunnelQuotaParameter"] = tunnelQuotaParameter ? boost::any(tunnelQuotaParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuotaParameter") != m.end() && !m["tunnelQuotaParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["tunnelQuotaParameter"].type()) {
        ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tunnelQuotaParameter"]));
        tunnelQuotaParameter = make_shared<ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter>(model1);
      }
    }
  }


  virtual ~ListTunnelQuotaTimerResponseBodyData() = default;
};
class ListTunnelQuotaTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTunnelQuotaTimerResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  ListTunnelQuotaTimerResponseBody() {}

  explicit ListTunnelQuotaTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListTunnelQuotaTimerResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTunnelQuotaTimerResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTunnelQuotaTimerResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListTunnelQuotaTimerResponseBody() = default;
};
class ListTunnelQuotaTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTunnelQuotaTimerResponseBody> body{};

  ListTunnelQuotaTimerResponse() {}

  explicit ListTunnelQuotaTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTunnelQuotaTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTunnelQuotaTimerResponseBody>(model1);
      }
    }
  }


  virtual ~ListTunnelQuotaTimerResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> tenantId{};

  ListUsersResponseBodyDataUsers() {}

  explicit ListUsersResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["accountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("accountName") != m.end() && !m["accountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["accountName"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListUsersResponseBodyDataUsers() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersResponseBodyDataUsers>> users{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListUsersResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListUsersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUsersResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListUsersByRoleResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListUsersByRoleResponseBodyDataUsers() {}

  explicit ListUsersByRoleResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListUsersByRoleResponseBodyDataUsers() = default;
};
class ListUsersByRoleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersByRoleResponseBodyDataUsers>> users{};

  ListUsersByRoleResponseBodyData() {}

  explicit ListUsersByRoleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListUsersByRoleResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersByRoleResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersByRoleResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersByRoleResponseBodyData() = default;
};
class ListUsersByRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListUsersByRoleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListUsersByRoleResponseBody() {}

  explicit ListUsersByRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUsersByRoleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUsersByRoleResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUsersByRoleResponseBody() = default;
};
class ListUsersByRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersByRoleResponseBody> body{};

  ListUsersByRoleResponse() {}

  explicit ListUsersByRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUsersByRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersByRoleResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersByRoleResponse() = default;
};
class QueryQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProven{};
  shared_ptr<bool> mock{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  QueryQuotaRequest() {}

  explicit QueryQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProven) {
      res["AkProven"] = boost::any(*akProven);
    }
    if (mock) {
      res["mock"] = boost::any(*mock);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProven") != m.end() && !m["AkProven"].empty()) {
      akProven = make_shared<string>(boost::any_cast<string>(m["AkProven"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["mock"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~QueryQuotaRequest() = default;
};
class QueryQuotaResponseBodyDataBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  QueryQuotaResponseBodyDataBillingPolicy() {}

  explicit QueryQuotaResponseBodyDataBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataBillingPolicy() = default;
};
class QueryQuotaResponseBodyDataSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  QueryQuotaResponseBodyDataSaleTag() {}

  explicit QueryQuotaResponseBodyDataSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataSaleTag() = default;
};
class QueryQuotaResponseBodyDataScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  QueryQuotaResponseBodyDataScheduleInfo() {}

  explicit QueryQuotaResponseBodyDataScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataScheduleInfo() = default;
};
class QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() {}

  explicit QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() = default;
};
class QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag() {}

  explicit QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag() = default;
};
class QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() {}

  explicit QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() = default;
};
class QueryQuotaResponseBodyDataSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  QueryQuotaResponseBodyDataSubQuotaInfoList() {}

  explicit QueryQuotaResponseBodyDataSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<QueryQuotaResponseBodyDataSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<QueryQuotaResponseBodyDataSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<QueryQuotaResponseBodyDataSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~QueryQuotaResponseBodyDataSubQuotaInfoList() = default;
};
class QueryQuotaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryQuotaResponseBodyDataBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<QueryQuotaResponseBodyDataSaleTag> saleTag{};
  shared_ptr<QueryQuotaResponseBodyDataScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<QueryQuotaResponseBodyDataSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  QueryQuotaResponseBodyData() {}

  explicit QueryQuotaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        QueryQuotaResponseBodyDataBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<QueryQuotaResponseBodyDataBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        QueryQuotaResponseBodyDataSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<QueryQuotaResponseBodyDataSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        QueryQuotaResponseBodyDataScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<QueryQuotaResponseBodyDataScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<QueryQuotaResponseBodyDataSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryQuotaResponseBodyDataSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<QueryQuotaResponseBodyDataSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~QueryQuotaResponseBodyData() = default;
};
class QueryQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryQuotaResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  QueryQuotaResponseBody() {}

  explicit QueryQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryQuotaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryQuotaResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryQuotaResponseBody() = default;
};
class QueryQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryQuotaResponseBody> body{};

  QueryQuotaResponse() {}

  explicit QueryQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~QueryQuotaResponse() = default;
};
class RetryMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  RetryMmsJobResponseBody() {}

  explicit RetryMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RetryMmsJobResponseBody() = default;
};
class RetryMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryMmsJobResponseBody> body{};

  RetryMmsJobResponse() {}

  explicit RetryMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RetryMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~RetryMmsJobResponse() = default;
};
class StartMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  StartMmsJobResponseBody() {}

  explicit StartMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StartMmsJobResponseBody() = default;
};
class StartMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartMmsJobResponseBody> body{};

  StartMmsJobResponse() {}

  explicit StartMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartMmsJobResponse() = default;
};
class StopMmsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  StopMmsJobResponseBody() {}

  explicit StopMmsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StopMmsJobResponseBody() = default;
};
class StopMmsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMmsJobResponseBody> body{};

  StopMmsJobResponse() {}

  explicit StopMmsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopMmsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMmsJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopMmsJobResponse() = default;
};
class UpdateComputeQuotaPlanRequestQuotaParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};

  UpdateComputeQuotaPlanRequestQuotaParameter() {}

  explicit UpdateComputeQuotaPlanRequestQuotaParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
  }


  virtual ~UpdateComputeQuotaPlanRequestQuotaParameter() = default;
};
class UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedCU{};
  shared_ptr<long> maxCU{};
  shared_ptr<long> minCU{};

  UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() {}

  explicit UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedCU) {
      res["elasticReservedCU"] = boost::any(*elasticReservedCU);
    }
    if (maxCU) {
      res["maxCU"] = boost::any(*maxCU);
    }
    if (minCU) {
      res["minCU"] = boost::any(*minCU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedCU") != m.end() && !m["elasticReservedCU"].empty()) {
      elasticReservedCU = make_shared<long>(boost::any_cast<long>(m["elasticReservedCU"]));
    }
    if (m.find("maxCU") != m.end() && !m["maxCU"].empty()) {
      maxCU = make_shared<long>(boost::any_cast<long>(m["maxCU"]));
    }
    if (m.find("minCU") != m.end() && !m["minCU"].empty()) {
      minCU = make_shared<long>(boost::any_cast<long>(m["minCU"]));
    }
  }


  virtual ~UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() = default;
};
class UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter> parameter{};

  UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList() {}

  explicit UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter>(model1);
      }
    }
  }


  virtual ~UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default;
};
class UpdateComputeQuotaPlanRequestQuota : public Darabonba::Model {
public:
  shared_ptr<UpdateComputeQuotaPlanRequestQuotaParameter> parameter{};
  shared_ptr<vector<UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList>> subQuotaInfoList{};

  UpdateComputeQuotaPlanRequestQuota() {}

  explicit UpdateComputeQuotaPlanRequestQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateComputeQuotaPlanRequestQuotaParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateComputeQuotaPlanRequestQuotaParameter>(model1);
      }
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList>>(expect1);
      }
    }
  }


  virtual ~UpdateComputeQuotaPlanRequestQuota() = default;
};
class UpdateComputeQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<UpdateComputeQuotaPlanRequestQuota> quota{};

  UpdateComputeQuotaPlanRequest() {}

  explicit UpdateComputeQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        UpdateComputeQuotaPlanRequestQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<UpdateComputeQuotaPlanRequestQuota>(model1);
      }
    }
  }


  virtual ~UpdateComputeQuotaPlanRequest() = default;
};
class UpdateComputeQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  UpdateComputeQuotaPlanResponseBody() {}

  explicit UpdateComputeQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateComputeQuotaPlanResponseBody() = default;
};
class UpdateComputeQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateComputeQuotaPlanResponseBody> body{};

  UpdateComputeQuotaPlanResponse() {}

  explicit UpdateComputeQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateComputeQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateComputeQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateComputeQuotaPlanResponse() = default;
};
class UpdateComputeQuotaScheduleRequestBodyCondition : public Darabonba::Model {
public:
  shared_ptr<string> at{};

  UpdateComputeQuotaScheduleRequestBodyCondition() {}

  explicit UpdateComputeQuotaScheduleRequestBodyCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (at) {
      res["at"] = boost::any(*at);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("at") != m.end() && !m["at"].empty()) {
      at = make_shared<string>(boost::any_cast<string>(m["at"]));
    }
  }


  virtual ~UpdateComputeQuotaScheduleRequestBodyCondition() = default;
};
class UpdateComputeQuotaScheduleRequestBody : public Darabonba::Model {
public:
  shared_ptr<UpdateComputeQuotaScheduleRequestBodyCondition> condition{};
  shared_ptr<string> plan{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  UpdateComputeQuotaScheduleRequestBody() {}

  explicit UpdateComputeQuotaScheduleRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (plan) {
      res["plan"] = boost::any(*plan);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["condition"].type()) {
        UpdateComputeQuotaScheduleRequestBodyCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["condition"]));
        condition = make_shared<UpdateComputeQuotaScheduleRequestBodyCondition>(model1);
      }
    }
    if (m.find("plan") != m.end() && !m["plan"].empty()) {
      plan = make_shared<string>(boost::any_cast<string>(m["plan"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateComputeQuotaScheduleRequestBody() = default;
};
class UpdateComputeQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateComputeQuotaScheduleRequestBody>> body{};

  UpdateComputeQuotaScheduleRequest() {}

  explicit UpdateComputeQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<UpdateComputeQuotaScheduleRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateComputeQuotaScheduleRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<UpdateComputeQuotaScheduleRequestBody>>(expect1);
      }
    }
  }


  virtual ~UpdateComputeQuotaScheduleRequest() = default;
};
class UpdateComputeQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  UpdateComputeQuotaScheduleResponseBody() {}

  explicit UpdateComputeQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateComputeQuotaScheduleResponseBody() = default;
};
class UpdateComputeQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateComputeQuotaScheduleResponseBody> body{};

  UpdateComputeQuotaScheduleResponse() {}

  explicit UpdateComputeQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateComputeQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateComputeQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateComputeQuotaScheduleResponse() = default;
};
class UpdateComputeSubQuotaRequestSubQuotaInfoListParameter : public Darabonba::Model {
public:
  shared_ptr<bool> enablePriority{};
  shared_ptr<bool> forceReservedMin{};
  shared_ptr<long> maxCU{};
  shared_ptr<long> minCU{};
  shared_ptr<string> schedulerType{};
  shared_ptr<long> singleJobCULimit{};

  UpdateComputeSubQuotaRequestSubQuotaInfoListParameter() {}

  explicit UpdateComputeSubQuotaRequestSubQuotaInfoListParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePriority) {
      res["enablePriority"] = boost::any(*enablePriority);
    }
    if (forceReservedMin) {
      res["forceReservedMin"] = boost::any(*forceReservedMin);
    }
    if (maxCU) {
      res["maxCU"] = boost::any(*maxCU);
    }
    if (minCU) {
      res["minCU"] = boost::any(*minCU);
    }
    if (schedulerType) {
      res["schedulerType"] = boost::any(*schedulerType);
    }
    if (singleJobCULimit) {
      res["singleJobCULimit"] = boost::any(*singleJobCULimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enablePriority") != m.end() && !m["enablePriority"].empty()) {
      enablePriority = make_shared<bool>(boost::any_cast<bool>(m["enablePriority"]));
    }
    if (m.find("forceReservedMin") != m.end() && !m["forceReservedMin"].empty()) {
      forceReservedMin = make_shared<bool>(boost::any_cast<bool>(m["forceReservedMin"]));
    }
    if (m.find("maxCU") != m.end() && !m["maxCU"].empty()) {
      maxCU = make_shared<long>(boost::any_cast<long>(m["maxCU"]));
    }
    if (m.find("minCU") != m.end() && !m["minCU"].empty()) {
      minCU = make_shared<long>(boost::any_cast<long>(m["minCU"]));
    }
    if (m.find("schedulerType") != m.end() && !m["schedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["schedulerType"]));
    }
    if (m.find("singleJobCULimit") != m.end() && !m["singleJobCULimit"].empty()) {
      singleJobCULimit = make_shared<long>(boost::any_cast<long>(m["singleJobCULimit"]));
    }
  }


  virtual ~UpdateComputeSubQuotaRequestSubQuotaInfoListParameter() = default;
};
class UpdateComputeSubQuotaRequestSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<UpdateComputeSubQuotaRequestSubQuotaInfoListParameter> parameter{};
  shared_ptr<string> type{};

  UpdateComputeSubQuotaRequestSubQuotaInfoList() {}

  explicit UpdateComputeSubQuotaRequestSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateComputeSubQuotaRequestSubQuotaInfoListParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateComputeSubQuotaRequestSubQuotaInfoListParameter>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateComputeSubQuotaRequestSubQuotaInfoList() = default;
};
class UpdateComputeSubQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>> subQuotaInfoList{};

  UpdateComputeSubQuotaRequest() {}

  explicit UpdateComputeSubQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<UpdateComputeSubQuotaRequestSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateComputeSubQuotaRequestSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>>(expect1);
      }
    }
  }


  virtual ~UpdateComputeSubQuotaRequest() = default;
};
class UpdateComputeSubQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  UpdateComputeSubQuotaResponseBody() {}

  explicit UpdateComputeSubQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateComputeSubQuotaResponseBody() = default;
};
class UpdateComputeSubQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateComputeSubQuotaResponseBody> body{};

  UpdateComputeSubQuotaResponse() {}

  explicit UpdateComputeSubQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateComputeSubQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateComputeSubQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateComputeSubQuotaResponse() = default;
};
class UpdateMmsDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> test{};

  UpdateMmsDataSourceRequest() {}

  explicit UpdateMmsDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (test) {
      res["test"] = boost::any(*test);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("test") != m.end() && !m["test"].empty()) {
      test = make_shared<bool>(boost::any_cast<bool>(m["test"]));
    }
  }


  virtual ~UpdateMmsDataSourceRequest() = default;
};
class UpdateMmsDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> asyncTaskId{};
  shared_ptr<long> sourceId{};

  UpdateMmsDataSourceResponseBodyData() {}

  explicit UpdateMmsDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncTaskId) {
      res["asyncTaskId"] = boost::any(*asyncTaskId);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncTaskId") != m.end() && !m["asyncTaskId"].empty()) {
      asyncTaskId = make_shared<long>(boost::any_cast<long>(m["asyncTaskId"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
  }


  virtual ~UpdateMmsDataSourceResponseBodyData() = default;
};
class UpdateMmsDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateMmsDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateMmsDataSourceResponseBody() {}

  explicit UpdateMmsDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateMmsDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateMmsDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateMmsDataSourceResponseBody() = default;
};
class UpdateMmsDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMmsDataSourceResponseBody> body{};

  UpdateMmsDataSourceResponse() {}

  explicit UpdateMmsDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateMmsDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMmsDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMmsDataSourceResponse() = default;
};
class UpdatePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  UpdatePackageRequest() {}

  explicit UpdatePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdatePackageRequest() = default;
};
class UpdatePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdatePackageResponseBody() {}

  explicit UpdatePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdatePackageResponseBody() = default;
};
class UpdatePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePackageResponseBody> body{};

  UpdatePackageResponse() {}

  explicit UpdatePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePackageResponse() = default;
};
class UpdateProjectBasicMetaRequestPropertiesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enable{};
  shared_ptr<string> key{};

  UpdateProjectBasicMetaRequestPropertiesEncryption() {}

  explicit UpdateProjectBasicMetaRequestPropertiesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~UpdateProjectBasicMetaRequestPropertiesEncryption() = default;
};
class UpdateProjectBasicMetaRequestPropertiesTableLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  UpdateProjectBasicMetaRequestPropertiesTableLifecycle() {}

  explicit UpdateProjectBasicMetaRequestPropertiesTableLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateProjectBasicMetaRequestPropertiesTableLifecycle() = default;
};
class UpdateProjectBasicMetaRequestProperties : public Darabonba::Model {
public:
  shared_ptr<bool> allowFullScan{};
  shared_ptr<bool> enableDecimal2{};
  shared_ptr<bool> enableTunnelQuotaRoute{};
  shared_ptr<UpdateProjectBasicMetaRequestPropertiesEncryption> encryption{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> sqlMeteringMax{};
  shared_ptr<UpdateProjectBasicMetaRequestPropertiesTableLifecycle> tableLifecycle{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tunnelQuota{};
  shared_ptr<string> typeSystem{};

  UpdateProjectBasicMetaRequestProperties() {}

  explicit UpdateProjectBasicMetaRequestProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowFullScan) {
      res["allowFullScan"] = boost::any(*allowFullScan);
    }
    if (enableDecimal2) {
      res["enableDecimal2"] = boost::any(*enableDecimal2);
    }
    if (enableTunnelQuotaRoute) {
      res["enableTunnelQuotaRoute"] = boost::any(*enableTunnelQuotaRoute);
    }
    if (encryption) {
      res["encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retentionDays) {
      res["retentionDays"] = boost::any(*retentionDays);
    }
    if (sqlMeteringMax) {
      res["sqlMeteringMax"] = boost::any(*sqlMeteringMax);
    }
    if (tableLifecycle) {
      res["tableLifecycle"] = tableLifecycle ? boost::any(tableLifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuota) {
      res["tunnelQuota"] = boost::any(*tunnelQuota);
    }
    if (typeSystem) {
      res["typeSystem"] = boost::any(*typeSystem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowFullScan") != m.end() && !m["allowFullScan"].empty()) {
      allowFullScan = make_shared<bool>(boost::any_cast<bool>(m["allowFullScan"]));
    }
    if (m.find("enableDecimal2") != m.end() && !m["enableDecimal2"].empty()) {
      enableDecimal2 = make_shared<bool>(boost::any_cast<bool>(m["enableDecimal2"]));
    }
    if (m.find("enableTunnelQuotaRoute") != m.end() && !m["enableTunnelQuotaRoute"].empty()) {
      enableTunnelQuotaRoute = make_shared<bool>(boost::any_cast<bool>(m["enableTunnelQuotaRoute"]));
    }
    if (m.find("encryption") != m.end() && !m["encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["encryption"].type()) {
        UpdateProjectBasicMetaRequestPropertiesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encryption"]));
        encryption = make_shared<UpdateProjectBasicMetaRequestPropertiesEncryption>(model1);
      }
    }
    if (m.find("retentionDays") != m.end() && !m["retentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["retentionDays"]));
    }
    if (m.find("sqlMeteringMax") != m.end() && !m["sqlMeteringMax"].empty()) {
      sqlMeteringMax = make_shared<string>(boost::any_cast<string>(m["sqlMeteringMax"]));
    }
    if (m.find("tableLifecycle") != m.end() && !m["tableLifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycle"].type()) {
        UpdateProjectBasicMetaRequestPropertiesTableLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycle"]));
        tableLifecycle = make_shared<UpdateProjectBasicMetaRequestPropertiesTableLifecycle>(model1);
      }
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuota") != m.end() && !m["tunnelQuota"].empty()) {
      tunnelQuota = make_shared<string>(boost::any_cast<string>(m["tunnelQuota"]));
    }
    if (m.find("typeSystem") != m.end() && !m["typeSystem"].empty()) {
      typeSystem = make_shared<string>(boost::any_cast<string>(m["typeSystem"]));
    }
  }


  virtual ~UpdateProjectBasicMetaRequestProperties() = default;
};
class UpdateProjectBasicMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<UpdateProjectBasicMetaRequestProperties> properties{};

  UpdateProjectBasicMetaRequest() {}

  explicit UpdateProjectBasicMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (properties) {
      res["properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["properties"].type()) {
        UpdateProjectBasicMetaRequestProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["properties"]));
        properties = make_shared<UpdateProjectBasicMetaRequestProperties>(model1);
      }
    }
  }


  virtual ~UpdateProjectBasicMetaRequest() = default;
};
class UpdateProjectBasicMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  UpdateProjectBasicMetaResponseBody() {}

  explicit UpdateProjectBasicMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProjectBasicMetaResponseBody() = default;
};
class UpdateProjectBasicMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectBasicMetaResponseBody> body{};

  UpdateProjectBasicMetaResponse() {}

  explicit UpdateProjectBasicMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProjectBasicMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectBasicMetaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectBasicMetaResponse() = default;
};
class UpdateProjectDefaultQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> quota{};

  UpdateProjectDefaultQuotaRequest() {}

  explicit UpdateProjectDefaultQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["quota"] = boost::any(*quota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      quota = make_shared<string>(boost::any_cast<string>(m["quota"]));
    }
  }


  virtual ~UpdateProjectDefaultQuotaRequest() = default;
};
class UpdateProjectDefaultQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateProjectDefaultQuotaResponseBody() {}

  explicit UpdateProjectDefaultQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProjectDefaultQuotaResponseBody() = default;
};
class UpdateProjectDefaultQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectDefaultQuotaResponseBody> body{};

  UpdateProjectDefaultQuotaResponse() {}

  explicit UpdateProjectDefaultQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProjectDefaultQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectDefaultQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectDefaultQuotaResponse() = default;
};
class UpdateProjectIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  UpdateProjectIpWhiteListRequest() {}

  explicit UpdateProjectIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdateProjectIpWhiteListRequest() = default;
};
class UpdateProjectIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateProjectIpWhiteListResponseBody() {}

  explicit UpdateProjectIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProjectIpWhiteListResponseBody() = default;
};
class UpdateProjectIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectIpWhiteListResponseBody> body{};

  UpdateProjectIpWhiteListResponse() {}

  explicit UpdateProjectIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProjectIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectIpWhiteListResponse() = default;
};
class UpdateQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  UpdateQuotaPlanRequest() {}

  explicit UpdateQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateQuotaPlanRequest() = default;
};
class UpdateQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateQuotaPlanResponseBody() {}

  explicit UpdateQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQuotaPlanResponseBody() = default;
};
class UpdateQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaPlanResponseBody> body{};

  UpdateQuotaPlanResponse() {}

  explicit UpdateQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaPlanResponse() = default;
};
class UpdateQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  UpdateQuotaScheduleRequest() {}

  explicit UpdateQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateQuotaScheduleRequest() = default;
};
class UpdateQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateQuotaScheduleResponseBody() {}

  explicit UpdateQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQuotaScheduleResponseBody() = default;
};
class UpdateQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaScheduleResponseBody> body{};

  UpdateQuotaScheduleResponse() {}

  explicit UpdateQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaScheduleResponse() = default;
};
class UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter : public Darabonba::Model {
public:
  shared_ptr<long> elasticReservedSlotNum{};
  shared_ptr<long> slotNum{};

  UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter() {}

  explicit UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticReservedSlotNum) {
      res["elasticReservedSlotNum"] = boost::any(*elasticReservedSlotNum);
    }
    if (slotNum) {
      res["slotNum"] = boost::any(*slotNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elasticReservedSlotNum") != m.end() && !m["elasticReservedSlotNum"].empty()) {
      elasticReservedSlotNum = make_shared<long>(boost::any_cast<long>(m["elasticReservedSlotNum"]));
    }
    if (m.find("slotNum") != m.end() && !m["slotNum"].empty()) {
      slotNum = make_shared<long>(boost::any_cast<long>(m["slotNum"]));
    }
  }


  virtual ~UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter() = default;
};
class UpdateTunnelQuotaTimerRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> timezone{};
  shared_ptr<UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter> tunnelQuotaParameter{};

  UpdateTunnelQuotaTimerRequestBody() {}

  explicit UpdateTunnelQuotaTimerRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuotaParameter) {
      res["tunnelQuotaParameter"] = tunnelQuotaParameter ? boost::any(tunnelQuotaParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuotaParameter") != m.end() && !m["tunnelQuotaParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["tunnelQuotaParameter"].type()) {
        UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tunnelQuotaParameter"]));
        tunnelQuotaParameter = make_shared<UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter>(model1);
      }
    }
  }


  virtual ~UpdateTunnelQuotaTimerRequestBody() = default;
};
class UpdateTunnelQuotaTimerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateTunnelQuotaTimerRequestBody>> body{};

  UpdateTunnelQuotaTimerRequest() {}

  explicit UpdateTunnelQuotaTimerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<UpdateTunnelQuotaTimerRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTunnelQuotaTimerRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<UpdateTunnelQuotaTimerRequestBody>>(expect1);
      }
    }
  }


  virtual ~UpdateTunnelQuotaTimerRequest() = default;
};
class UpdateTunnelQuotaTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  UpdateTunnelQuotaTimerResponseBody() {}

  explicit UpdateTunnelQuotaTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateTunnelQuotaTimerResponseBody() = default;
};
class UpdateTunnelQuotaTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTunnelQuotaTimerResponseBody> body{};

  UpdateTunnelQuotaTimerResponse() {}

  explicit UpdateTunnelQuotaTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTunnelQuotaTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTunnelQuotaTimerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTunnelQuotaTimerResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ApplyComputeQuotaPlanResponse applyComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                 shared_ptr<string> planName,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyComputeQuotaPlanResponse applyComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName);
  CreateComputeQuotaPlanResponse createComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                   shared_ptr<CreateComputeQuotaPlanRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateComputeQuotaPlanResponse createComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<CreateComputeQuotaPlanRequest> request);
  CreateMmsDataSourceResponse createMmsDataSourceWithOptions(shared_ptr<CreateMmsDataSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMmsDataSourceResponse createMmsDataSource(shared_ptr<CreateMmsDataSourceRequest> request);
  CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJobWithOptions(shared_ptr<string> sourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJob(shared_ptr<string> sourceId);
  CreateMmsJobResponse createMmsJobWithOptions(shared_ptr<string> sourceId,
                                               shared_ptr<CreateMmsJobRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMmsJobResponse createMmsJob(shared_ptr<string> sourceId, shared_ptr<CreateMmsJobRequest> request);
  CreatePackageResponse createPackageWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<CreatePackageRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePackageResponse createPackage(shared_ptr<string> projectName, shared_ptr<CreatePackageRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateQuotaPlanResponse createQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<CreateQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaPlanResponse createQuotaPlan(shared_ptr<string> nickname, shared_ptr<CreateQuotaPlanRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<CreateRoleRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<string> projectName, shared_ptr<CreateRoleRequest> request);
  DeleteComputeQuotaPlanResponse deleteComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                   shared_ptr<string> planName,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteComputeQuotaPlanResponse deleteComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName);
  DeleteMmsDataSourceResponse deleteMmsDataSourceWithOptions(shared_ptr<string> sourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMmsDataSourceResponse deleteMmsDataSource(shared_ptr<string> sourceId);
  DeleteMmsJobResponse deleteMmsJobWithOptions(shared_ptr<string> sourceId,
                                               shared_ptr<string> jobId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMmsJobResponse deleteMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId);
  DeleteQuotaPlanResponse deleteQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<string> planName,
                                                     shared_ptr<DeleteQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQuotaPlanResponse deleteQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<DeleteQuotaPlanRequest> request);
  GetComputeEffectivePlanResponse getComputeEffectivePlanWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComputeEffectivePlanResponse getComputeEffectivePlan(shared_ptr<string> nickname);
  GetComputeQuotaPlanResponse getComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                             shared_ptr<string> planName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComputeQuotaPlanResponse getComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName);
  GetComputeQuotaScheduleResponse getComputeQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                     shared_ptr<GetComputeQuotaScheduleRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComputeQuotaScheduleResponse getComputeQuotaSchedule(shared_ptr<string> nickname, shared_ptr<GetComputeQuotaScheduleRequest> request);
  GetJobResourceUsageResponse getJobResourceUsageWithOptions(shared_ptr<GetJobResourceUsageRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResourceUsageResponse getJobResourceUsage(shared_ptr<GetJobResourceUsageRequest> request);
  GetMmsAsyncTaskResponse getMmsAsyncTaskWithOptions(shared_ptr<string> sourceId,
                                                     shared_ptr<string> asyncTaskId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsAsyncTaskResponse getMmsAsyncTask(shared_ptr<string> sourceId, shared_ptr<string> asyncTaskId);
  GetMmsDataSourceResponse getMmsDataSourceWithOptions(shared_ptr<string> sourceId,
                                                       shared_ptr<GetMmsDataSourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsDataSourceResponse getMmsDataSource(shared_ptr<string> sourceId, shared_ptr<GetMmsDataSourceRequest> request);
  GetMmsDbResponse getMmsDbWithOptions(shared_ptr<string> sourceId,
                                       shared_ptr<string> dbId,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsDbResponse getMmsDb(shared_ptr<string> sourceId, shared_ptr<string> dbId);
  GetMmsFetchMetadataJobResponse getMmsFetchMetadataJobWithOptions(shared_ptr<string> sourceId,
                                                                   shared_ptr<string> scanId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsFetchMetadataJobResponse getMmsFetchMetadataJob(shared_ptr<string> sourceId, shared_ptr<string> scanId);
  GetMmsJobResponse getMmsJobWithOptions(shared_ptr<string> sourceId,
                                         shared_ptr<string> jobId,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsJobResponse getMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId);
  GetMmsPartitionResponse getMmsPartitionWithOptions(shared_ptr<string> sourceId,
                                                     shared_ptr<string> partitionId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsPartitionResponse getMmsPartition(shared_ptr<string> sourceId, shared_ptr<string> partitionId);
  GetMmsTableResponse getMmsTableWithOptions(shared_ptr<string> sourceId,
                                             shared_ptr<string> tableId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsTableResponse getMmsTable(shared_ptr<string> sourceId, shared_ptr<string> tableId);
  GetMmsTaskResponse getMmsTaskWithOptions(shared_ptr<string> sourceId,
                                           shared_ptr<string> taskId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMmsTaskResponse getMmsTask(shared_ptr<string> sourceId, shared_ptr<string> taskId);
  GetPackageResponse getPackageWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<string> packageName,
                                           shared_ptr<GetPackageRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPackageResponse getPackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<GetPackageRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<GetProjectRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> projectName, shared_ptr<GetProjectRequest> request);
  GetQuotaResponse getQuotaWithOptions(shared_ptr<string> nickname,
                                       shared_ptr<GetQuotaRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaResponse getQuota(shared_ptr<string> nickname, shared_ptr<GetQuotaRequest> request);
  GetQuotaPlanResponse getQuotaPlanWithOptions(shared_ptr<string> nickname,
                                               shared_ptr<string> planName,
                                               shared_ptr<GetQuotaPlanRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaPlanResponse getQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<GetQuotaPlanRequest> request);
  GetQuotaScheduleResponse getQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                       shared_ptr<GetQuotaScheduleRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaScheduleResponse getQuotaSchedule(shared_ptr<string> nickname, shared_ptr<GetQuotaScheduleRequest> request);
  GetQuotaUsageResponse getQuotaUsageWithOptions(shared_ptr<string> nickname,
                                                 shared_ptr<GetQuotaUsageRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaUsageResponse getQuotaUsage(shared_ptr<string> nickname, shared_ptr<GetQuotaUsageRequest> request);
  GetRoleAclResponse getRoleAclWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<string> roleName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleAclResponse getRoleAcl(shared_ptr<string> projectName, shared_ptr<string> roleName);
  GetRoleAclOnObjectResponse getRoleAclOnObjectWithOptions(shared_ptr<string> projectName,
                                                           shared_ptr<string> roleName,
                                                           shared_ptr<GetRoleAclOnObjectRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleAclOnObjectResponse getRoleAclOnObject(shared_ptr<string> projectName, shared_ptr<string> roleName, shared_ptr<GetRoleAclOnObjectRequest> request);
  GetRolePolicyResponse getRolePolicyWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<string> roleName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRolePolicyResponse getRolePolicy(shared_ptr<string> projectName, shared_ptr<string> roleName);
  GetRunningJobsResponse getRunningJobsWithOptions(shared_ptr<GetRunningJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRunningJobsResponse getRunningJobs(shared_ptr<GetRunningJobsRequest> request);
  GetTableInfoResponse getTableInfoWithOptions(shared_ptr<string> projectName,
                                               shared_ptr<string> tableName,
                                               shared_ptr<GetTableInfoRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableInfoResponse getTableInfo(shared_ptr<string> projectName, shared_ptr<string> tableName, shared_ptr<GetTableInfoRequest> request);
  GetTrustedProjectsResponse getTrustedProjectsWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrustedProjectsResponse getTrustedProjects(shared_ptr<string> projectName);
  KillJobsResponse killJobsWithOptions(shared_ptr<KillJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillJobsResponse killJobs(shared_ptr<KillJobsRequest> request);
  ListComputeQuotaPlanResponse listComputeQuotaPlanWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListComputeQuotaPlanResponse listComputeQuotaPlan(shared_ptr<string> nickname);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<ListFunctionsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<string> projectName, shared_ptr<ListFunctionsRequest> request);
  ListJobInfosResponse listJobInfosWithOptions(shared_ptr<ListJobInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobInfosResponse listJobInfos(shared_ptr<ListJobInfosRequest> request);
  ListMmsDataSourcesResponse listMmsDataSourcesWithOptions(shared_ptr<ListMmsDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsDataSourcesResponse listMmsDataSources(shared_ptr<ListMmsDataSourcesRequest> request);
  ListMmsDbsResponse listMmsDbsWithOptions(shared_ptr<string> sourceId,
                                           shared_ptr<ListMmsDbsRequest> tmpReq,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsDbsResponse listMmsDbs(shared_ptr<string> sourceId, shared_ptr<ListMmsDbsRequest> request);
  ListMmsJobsResponse listMmsJobsWithOptions(shared_ptr<string> sourceId,
                                             shared_ptr<ListMmsJobsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsJobsResponse listMmsJobs(shared_ptr<string> sourceId, shared_ptr<ListMmsJobsRequest> request);
  ListMmsPartitionsResponse listMmsPartitionsWithOptions(shared_ptr<string> sourceId,
                                                         shared_ptr<ListMmsPartitionsRequest> tmpReq,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsPartitionsResponse listMmsPartitions(shared_ptr<string> sourceId, shared_ptr<ListMmsPartitionsRequest> request);
  ListMmsTablesResponse listMmsTablesWithOptions(shared_ptr<string> sourceId,
                                                 shared_ptr<ListMmsTablesRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsTablesResponse listMmsTables(shared_ptr<string> sourceId, shared_ptr<ListMmsTablesRequest> request);
  ListMmsTaskLogsResponse listMmsTaskLogsWithOptions(shared_ptr<string> sourceId,
                                                     shared_ptr<string> taskId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsTaskLogsResponse listMmsTaskLogs(shared_ptr<string> sourceId, shared_ptr<string> taskId);
  ListMmsTasksResponse listMmsTasksWithOptions(shared_ptr<string> sourceId,
                                               shared_ptr<ListMmsTasksRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMmsTasksResponse listMmsTasks(shared_ptr<string> sourceId, shared_ptr<ListMmsTasksRequest> request);
  ListPackagesResponse listPackagesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPackagesResponse listPackages(shared_ptr<string> projectName);
  ListProjectUsersResponse listProjectUsersWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectUsersResponse listProjectUsers(shared_ptr<string> projectName);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListQuotasResponse listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasResponse listQuotas(shared_ptr<ListQuotasRequest> request);
  ListQuotasPlansResponse listQuotasPlansWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<ListQuotasPlansRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasPlansResponse listQuotasPlans(shared_ptr<string> nickname, shared_ptr<ListQuotasPlansRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<ListResourcesRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<string> projectName, shared_ptr<ListResourcesRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<string> projectName);
  ListStoragePartitionsInfoResponse listStoragePartitionsInfoWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> table,
                                                                         shared_ptr<ListStoragePartitionsInfoRequest> tmpReq,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStoragePartitionsInfoResponse listStoragePartitionsInfo(shared_ptr<string> project, shared_ptr<string> table, shared_ptr<ListStoragePartitionsInfoRequest> request);
  ListStorageTablesInfoResponse listStorageTablesInfoWithOptions(shared_ptr<string> project,
                                                                 shared_ptr<ListStorageTablesInfoRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStorageTablesInfoResponse listStorageTablesInfo(shared_ptr<string> project, shared_ptr<ListStorageTablesInfoRequest> request);
  ListTablesResponse listTablesWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<ListTablesRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTablesResponse listTables(shared_ptr<string> projectName, shared_ptr<ListTablesRequest> request);
  ListTunnelQuotaTimerResponse listTunnelQuotaTimerWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTunnelQuotaTimerResponse listTunnelQuotaTimer(shared_ptr<string> nickname);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersByRoleResponse listUsersByRoleWithOptions(shared_ptr<string> projectName,
                                                     shared_ptr<string> roleName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersByRoleResponse listUsersByRole(shared_ptr<string> projectName, shared_ptr<string> roleName);
  QueryQuotaResponse queryQuotaWithOptions(shared_ptr<string> nickname,
                                           shared_ptr<QueryQuotaRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryQuotaResponse queryQuota(shared_ptr<string> nickname, shared_ptr<QueryQuotaRequest> request);
  RetryMmsJobResponse retryMmsJobWithOptions(shared_ptr<string> sourceId,
                                             shared_ptr<string> jobId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryMmsJobResponse retryMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId);
  StartMmsJobResponse startMmsJobWithOptions(shared_ptr<string> sourceId,
                                             shared_ptr<string> jobId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMmsJobResponse startMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId);
  StopMmsJobResponse stopMmsJobWithOptions(shared_ptr<string> sourceId,
                                           shared_ptr<string> jobId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMmsJobResponse stopMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId);
  UpdateComputeQuotaPlanResponse updateComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                   shared_ptr<UpdateComputeQuotaPlanRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateComputeQuotaPlanResponse updateComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<UpdateComputeQuotaPlanRequest> request);
  UpdateComputeQuotaScheduleResponse updateComputeQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                           shared_ptr<UpdateComputeQuotaScheduleRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateComputeQuotaScheduleResponse updateComputeQuotaSchedule(shared_ptr<string> nickname, shared_ptr<UpdateComputeQuotaScheduleRequest> request);
  UpdateComputeSubQuotaResponse updateComputeSubQuotaWithOptions(shared_ptr<string> nickname,
                                                                 shared_ptr<UpdateComputeSubQuotaRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateComputeSubQuotaResponse updateComputeSubQuota(shared_ptr<string> nickname, shared_ptr<UpdateComputeSubQuotaRequest> request);
  UpdateMmsDataSourceResponse updateMmsDataSourceWithOptions(shared_ptr<string> sourceId,
                                                             shared_ptr<UpdateMmsDataSourceRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMmsDataSourceResponse updateMmsDataSource(shared_ptr<string> sourceId, shared_ptr<UpdateMmsDataSourceRequest> request);
  UpdatePackageResponse updatePackageWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<string> packageName,
                                                 shared_ptr<UpdatePackageRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePackageResponse updatePackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<UpdatePackageRequest> request);
  UpdateProjectBasicMetaResponse updateProjectBasicMetaWithOptions(shared_ptr<string> projectName,
                                                                   shared_ptr<UpdateProjectBasicMetaRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectBasicMetaResponse updateProjectBasicMeta(shared_ptr<string> projectName, shared_ptr<UpdateProjectBasicMetaRequest> request);
  UpdateProjectDefaultQuotaResponse updateProjectDefaultQuotaWithOptions(shared_ptr<string> projectName,
                                                                         shared_ptr<UpdateProjectDefaultQuotaRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectDefaultQuotaResponse updateProjectDefaultQuota(shared_ptr<string> projectName, shared_ptr<UpdateProjectDefaultQuotaRequest> request);
  UpdateProjectIpWhiteListResponse updateProjectIpWhiteListWithOptions(shared_ptr<string> projectName,
                                                                       shared_ptr<UpdateProjectIpWhiteListRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectIpWhiteListResponse updateProjectIpWhiteList(shared_ptr<string> projectName, shared_ptr<UpdateProjectIpWhiteListRequest> request);
  UpdateQuotaPlanResponse updateQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<string> planName,
                                                     shared_ptr<UpdateQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaPlanResponse updateQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<UpdateQuotaPlanRequest> request);
  UpdateQuotaScheduleResponse updateQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                             shared_ptr<UpdateQuotaScheduleRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaScheduleResponse updateQuotaSchedule(shared_ptr<string> nickname, shared_ptr<UpdateQuotaScheduleRequest> request);
  UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimerWithOptions(shared_ptr<string> nickname,
                                                                   shared_ptr<UpdateTunnelQuotaTimerRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimer(shared_ptr<string> nickname, shared_ptr<UpdateTunnelQuotaTimerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MaxCompute20220104

#endif
