#include "enginecheckoption.h"

EngineCheckOption::EngineCheckOption(const QString& name,
                                     const QVariant& value,
                                     const QVariant& defaultValue,
                                     const QString& alias)
	: EngineOption(name, QVariant::Bool, value, defaultValue, alias)
{
}

EngineOption* EngineCheckOption::copy() const
{
	return new EngineCheckOption(*this);
}

bool EngineCheckOption::isValid(const QVariant& value) const
{
	if (value.canConvert(QVariant::Bool))
	{
		QString str(value.toString());
		return (str == "true" || str == "false");
	}
	return false;
}

QVariant EngineCheckOption::toVariant() const
{
	QVariantMap map;

	map.insert("type", "check");

	map.insert("name", name());
	map.insert("value", value());
	map.insert("default", defaultValue());
	map.insert("alias", alias());

	return map;
}
